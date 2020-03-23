#ifndef _ZL_DATA_FORMAT_BASE_H_
#define _ZL_DATA_FORMAT_BASE_H_

namespace zl
{
	class data_format_base
	{
	public:
		data_format_base();
		~data_format_base();

		virtual const std::string type() = 0;

		virtual const std::string& filename();
		virtual void filename(const std::string& val);

		virtual const std::string& content();
		virtual void content(const std::string& val);

		virtual void do_read();
		virtual void do_write();

	private:
		std::string filename_;
		std::string content_;
	};
}

#endif
