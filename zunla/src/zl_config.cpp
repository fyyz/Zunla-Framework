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

zl::config_item_json::config_item_json()
{
}

zl::config_item_json::~config_item_json()
{
}

const std::string zl::config_item_json::get_type()
{
	return "json";
}

zl::config_item_xml::config_item_xml()
{
}

zl::config_item_xml::~config_item_xml()
{
}

const std::string zl::config_item_xml::get_type()
{
	return "xml";
}
