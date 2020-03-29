#ifndef _ZL_OBJECT_MANAGER_H_
#define _ZL_OBJECT_MANAGER_H_

namespace zl
{
	template<class C>
	class object_manager
	{
	public:
		object_manager()
		{
			static_assert(std::is_base_of<object, C>::value, "");
		}

		~object_manager()
		{
		}

		void do_init()
		{
			object_map_.clear();
		}

		std::shared_ptr<C> create()
		{
			std::shared_ptr<C> obj = std::make_shared<C>();
			object_map_.insert({ obj->get_id(),obj });
			return obj;
		}

		void destroy(std::uint64_t id)
		{
		}

		void destroy(std::shared_ptr<C> obj)
		{
		}

	private:
		std::map<std::uint64_t, std::shared_ptr<C>> object_map_;
	};
}

#endif