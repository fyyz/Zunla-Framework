#include "zl.h"

zl::environment& zl::environment::get()
{
	static environment instance;
	return instance;
}

void zl::environment::do_init()
{
}

const std::string& zl::environment::get_program_dir()
{
	return program_dir_;
}

zl::environment::environment()
:program_dir_(boost::dll::program_location().parent_path().string())
{
}

zl::environment::~environment()
{
}
