#include "zl.h"

const std::uint64_t zl::object::get_increment_id()
{
	return zl_env.get_increment_id();
}
