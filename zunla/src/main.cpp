#include "zl.h"

int main()
{
	zl_env.do_init();
	
	auto _1 = zl_env.get_module<zl::config>()->create();
	auto _2 = zl_env.get_module<zl::config>()->create();
	auto _3 = zl_env.get_module<zl::config>()->create();

	auto a = zl_env.get_module<zl::config>();
	
	return 0;
}
