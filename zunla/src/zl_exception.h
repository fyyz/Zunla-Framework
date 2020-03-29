#ifndef _ZL_EXCEPTION_H_
#define _ZL_EXCEPTION_H_

#define REGISTER_EXCEPTION(exception_name) \
	class exception_name : public std::exception \
	{ \
	public: \
		exception_name() \
			:exception(#exception_name, 1) \
		{ \
		} \
	};

namespace zl
{
	REGISTER_EXCEPTION(zl_config_directory_access_failed_exception);
	REGISTER_EXCEPTION(zl_config_file_exists_exception);
}

#endif
