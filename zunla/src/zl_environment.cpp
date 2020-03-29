#include "zl.h"

zl::environment& zl::environment::get()
{
	static environment instance;
	return instance;
}

void zl::environment::do_init()
{
	init_increment_id();
	init_default_module();
}

const std::string& zl::environment::get_program_dir() const
{
	return program_dir_;
}

std::uint64_t zl::environment::get_increment_id()
{
	std::uint64_t temp_id = increment_id_;
	increment_id_++;
	return temp_id;
}

zl::environment::environment()
:program_dir_(boost::dll::program_location().parent_path().string())
{
}

zl::environment::~environment()
{
}

void zl::environment::init_increment_id()
{
	increment_id_ = 0;
}

void zl::environment::init_default_module()
{
	do_register_module<config>();
}
