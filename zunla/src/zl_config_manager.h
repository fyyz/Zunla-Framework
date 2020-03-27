#ifndef _ZUNLA_CONFIG_MANAGER_H_
#define _ZUNLA_CONFIG_MANAGER_H_

namespace zl
{
	class config_manager
	{
	public:
		config_manager();
		~config_manager();

		void do_init();

		std::shared_ptr<config_base> do_create(const std::string& filename);
		std::shared_ptr<config_base> do_read(const std::string& filename);
		std::shared_ptr<config_base> do_update(const std::string& filename);
		std::shared_ptr<config_base> do_delete(const std::string& filename);

		const std::string& get_config_dir();

	private:
		std::map<std::string, std::shared_ptr<config_base>> config_items;
		const std::string config_dir_;

		/*
		std::string build_full_filename(const std::string& filename);
		*/
	};
}

#endif
