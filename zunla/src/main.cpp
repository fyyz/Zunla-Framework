#include "zl.h"

int main()
{
	pugi::xml_document doc;
	pugi::xml_parse_result result = doc.load_file("tree.xml");
	std::cout << "Load result: " << result.description() << ", mesh name: " << doc.child("mesh").attribute("name").value() << std::endl;

	zl_env.do_init();

	std::shared_ptr<zl::data_format_base> data;
	data = std::make_shared<zl::data_format_xml>();

	/*
	data->filename("test.xml");
	data->content(R"(aaa)");
	*/

	return 0;
}
