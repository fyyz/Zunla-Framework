#include "zl.h"

zl::config_base::config_base(const std::string& filename)
:filename_(filename)
{
}

zl::config_base::~config_base()
{
}

const std::string& zl::config_base::filename()
{
	return filename_;
}

void zl::config_base::do_init()
{
}

void zl::config_base::do_read()
{
}

void zl::config_base::do_write()
{
}

std::string zl::config_base::full_filename()
{
	boost::filesystem::path config_file_path(zl_env.get_config_manager()->get_config_dir());
	config_file_path.append(filename_);

	return config_file_path.string();
}
