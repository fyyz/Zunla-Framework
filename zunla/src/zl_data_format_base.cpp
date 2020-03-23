#include "zl.h"

zl::data_format_base::data_format_base()
{
}

zl::data_format_base::~data_format_base()
{
}

const std::string& zl::data_format_base::filename()
{
	return filename_;
}

void zl::data_format_base::filename(const std::string& val)
{
	filename_ = val;
}

const std::string& zl::data_format_base::content()
{
	return content_;
}

void zl::data_format_base::content(const std::string& val)
{
	content_ = val;
}

void zl::data_format_base::do_read()
{

}

void zl::data_format_base::do_write()
{
}
