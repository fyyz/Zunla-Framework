#ifndef _ZUNLA_CONFIG_H_
#define _ZUNLA_CONFIG_H_

namespace zl
{
	class config_item_base
	{
	public:
		config_item_base();
		virtual ~config_item_base();

		virtual const std::string get_type() = 0;

		virtual const std::string& filename() const;
		virtual void filename(const std::string& val);

	private:
		std::string filename_;
	};

	class config_item_json : public config_item_base
	{
	public:
		config_item_json();
		virtual ~config_item_json();

		virtual const std::string get_type();

	private:
	};

	class config_item_xml : public config_item_base
	{
	public:
		config_item_xml();
		virtual ~config_item_xml();

		virtual const std::string get_type();
	private:
	};

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