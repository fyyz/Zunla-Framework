#include "zl.h"

int main()
{
	zl_env.do_init();

	std::shared_ptr<zl::data_format_base> data;
	data = std::make_shared<zl::data_format_xml>();

	data->filename("test.xml");
	data->content(R"(aaa)");

	return 0;
}
