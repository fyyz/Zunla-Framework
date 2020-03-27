#include "zl.h"

int main()
{
	zl_env.do_init();
	
	if (zl_env.get_config_manager()->do_read("a.xml") == nullptr)
	{
		zl_env.get_config_manager()->do_create("a.xml");
	}
	

	return 0;
}
