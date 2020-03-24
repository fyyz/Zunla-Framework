#ifndef _ZUNLA_CONFIG_H_
#define _ZUNLA_CONFIG_H_

namespace zl
{
	class config
	{
	public:
		config();
		~config();

	private:
		std::map<std::string, std::shared_ptr<config_item_base>> config_items;
	};
}

#endif