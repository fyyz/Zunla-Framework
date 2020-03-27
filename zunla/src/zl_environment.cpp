#include "zl.h"

zl::environment& zl::environment::get()
{
	static environment instance;
	return instance;
}

void zl::environment::do_init()
{
	init_config_manager();
}

const std::string& zl::environment::get_program_dir()
{
	return program_dir_;
}

std::shared_ptr<zl::config_manager> zl::environment::get_config_manager()
{
	return config_manager_;
}

zl::environment::environment()
:program_dir_(boost::dll::program_location().parent_path().string())
{
}

zl::environment::~environment()
{
}

void zl::environment::init_config_manager()
{
	config_manager_ = std::make_shared<config_manager>();
	config_manager_->do_init();
}
