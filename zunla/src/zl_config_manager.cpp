#include "zl.h"

zl::config_manager::config_manager()
:config_dir_(boost::filesystem::path(zl_env.get_program_dir()).append("config").string())
{
}

zl::config_manager::~config_manager()
{
}

void zl::config_manager::do_init()
{
	boost::filesystem::path config_path(config_dir_);
	if (!boost::filesystem::exists(config_path))
	{
		boost::filesystem::create_directories(config_path);
	}

	if (!boost::filesystem::is_directory(config_path))
	{
		throw zl_config_directory_access_failed_exception();
	}
}

std::shared_ptr<zl::config_base> zl::config_manager::do_create(const std::string& filename)
{
	if (config_items.find(filename) != config_items.end())
	{
		throw zl_config_file_exists_exception();
	}

	std::shared_ptr<config_base> config_item = std::make_shared<config_base>(filename);
	config_item->do_init();

	config_items.insert({ filename,config_item });

	return config_item;
}

std::shared_ptr<zl::config_base> zl::config_manager::do_read(const std::string& filename)
{
	if (config_items.find(filename) == config_items.end())
	{
		return nullptr;
	}
	return config_items.at(filename);
}

std::shared_ptr<zl::config_base> zl::config_manager::do_update(const std::string& filename)
{
	return std::shared_ptr<config_base>();
}

std::shared_ptr<zl::config_base> zl::config_manager::do_delete(const std::string& filename)
{
	return std::shared_ptr<config_base>();
}

const std::string& zl::config_manager::get_config_dir()
{
	return config_dir_;
}

/*
std::string zl::config_manager::build_full_filename(const std::string& filename)
{
	boost::filesystem::path config_dir_path(config_dir_);
	config_dir_path.append(filename);
	return config_dir_path.string();
}
*/

