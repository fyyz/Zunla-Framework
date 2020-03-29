#ifndef _ZL_ENVIRONMENT_H_
#define _ZL_ENVIRONMENT_H_

namespace zl
{
	class environment
	{
	public:
		static environment& get();

		environment(environment const&)            = delete;
		environment(environment&&)                 = delete;
		environment& operator=(environment const&) = delete;
		environment& operator=(environment&&)      = delete;

		const std::string& get_program_dir() const;

		void do_init();

		template<class C>
		void do_register_module()
		{
			static_assert(std::is_base_of<object, C>::value, "");

			std::string object_type = typeid(C).name();
			if (module_map_.find(object_type) != module_map_.end())
			{
				throw;
			}

			std::shared_ptr<object_manager<C>> temp_object_manager = std::make_shared<object_manager<C>>();
			temp_object_manager->do_init();
			module_map_.insert({ object_type, temp_object_manager });
		}

		template<class C>
		std::shared_ptr<object_manager<C>> get_module()
		{
			std::string typeid_string = typeid(C).name();
			if (module_map_.find(typeid_string) == module_map_.end())
			{
				throw;
			}

			return boost::any_cast<std::shared_ptr<object_manager<C>>>(module_map_.at(typeid_string));
		}

		std::uint64_t get_increment_id();

	private:
		environment();
		~environment();

		void init_increment_id();
		void init_default_module();

		const std::string program_dir_;

		std::uint64_t increment_id_;

		std::map<std::string, boost::any> module_map_;
	};
}

#define zl_env (zl::environment::get())

#endif
