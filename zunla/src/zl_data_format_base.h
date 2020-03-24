#ifndef _ZL_DATA_FORMAT_BASE_H_
#define _ZL_DATA_FORMAT_BASE_H_

namespace zl
{
	class data_format_base
	{
	public:
		data_format_base(const std::string& filename = "");
		~data_format_base();

		virtual const std::string type() = 0;

		virtual void do_load();
		virtual void do_dump();

		bool is_exists();

	private:
		std::string filename_;
		std::string content_;
	};
}

#endif
