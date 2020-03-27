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

		void do_init();

		const std::string& get_program_dir();
		std::shared_ptr<config_manager> get_config_manager();

	private:
		environment();
		~environment();

		void init_config_manager();

		const std::string program_dir_;
		std::shared_ptr<config_manager> config_manager_;
	};
}

#define zl_env (zl::environment::get())

#endif
