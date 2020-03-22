#include "zl.h"

zl::config_item_base::config_item_base()
{
}

zl::config_item_base::~config_item_base()
{
}

const std::string& zl::config_item_base::filename() const
{
	return filename_;
}

void zl::config_item_base::filename(const std::string& val)
{
	filename_ = val;
}
