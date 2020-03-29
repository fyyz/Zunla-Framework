#ifndef _ZL_OBJECT_H_
#define _ZL_OBJECT_H_

namespace zl
{
	class object
	{
	public:
		object()
		:id_(get_increment_id())
		{
		}
		
		~object()
		{
		}

		const std::uint64_t& get_id()
		{
			return id_;
		}

	private:

		std::uint64_t id_;

		const std::uint64_t get_increment_id();
	};
}

#endif