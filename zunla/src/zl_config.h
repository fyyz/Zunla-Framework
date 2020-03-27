#ifndef _ZL_CONFIG_H_
#define _ZL_CONFIG_H_

namespace zl
{
	class config_base
	{
	public:
		config_base(const std::string& filename);
		~config_base();

		virtual const std::string& filename();

		virtual bool is_exists();

		virtual void do_init();
		virtual void do_read();
		virtual void do_write();

	protected:
		std::string full_filename();

	private:
		std::string filename_;


	};
}

#endif