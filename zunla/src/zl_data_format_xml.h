#ifndef _ZL_DATA_FORMAT_XML_H_
#define _ZL_DATA_FORMAT_XML_H_

namespace zl
{
	class data_format_xml : public data_format_base
	{
	public:
		data_format_xml();
		~data_format_xml();

		virtual const std::string type();

	private:
	};
}

#endif
