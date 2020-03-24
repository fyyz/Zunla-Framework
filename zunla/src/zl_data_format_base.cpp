#include "zl.h"

zl::data_format_base::data_format_base(const std::string& filename)
:filename_(filename)
{
}

zl::data_format_base::~data_format_base()
{
}

void zl::data_format_base::do_load()
{
}

void zl::data_format_base::do_dump()
{
}

bool zl::data_format_base::is_exists()
{
	return false;
}
