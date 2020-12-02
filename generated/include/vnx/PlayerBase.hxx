
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_PlayerBase_HXX_
#define INCLUDE_vnx_PlayerBase_HXX_

#include <vnx/package.hxx>
#include <vnx/Module.h>
#include <vnx/RecordHeader.hxx>
#include <vnx/TopicPtr.hpp>


namespace vnx {

class PlayerBase : public ::vnx::Module {
public:
	
	::vnx::TopicPtr output_status = "vnx.player_status";
	std::vector<std::string> files;
	int32_t interval_ms = 100;
	int32_t max_time_gap_ms = 5000;
	vnx::float64_t play_speed = 1;
	vnx::bool_t is_default_enable = true;
	vnx::bool_t is_blocking = false;
	vnx::bool_t is_repeat = false;
	vnx::bool_t is_autostart = false;
	vnx::bool_t is_autoclose = false;
	vnx::bool_t is_autoshutdown = false;
	std::map<::vnx::TopicPtr, ::vnx::TopicPtr> topic_map;
	
	typedef ::vnx::Module Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	PlayerBase(const std::string& _vnx_name);
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	void read(std::istream& _in) override;
	void write(std::ostream& _out) const override;
	
	void accept(vnx::Visitor& _visitor) const override;
	
	vnx::Object to_object() const override;
	void from_object(const vnx::Object& object) override;
	
	vnx::Variant get_field(const std::string& name) const override;
	void set_field(const std::string& name, const vnx::Variant& value) override;
	
	friend std::ostream& operator<<(std::ostream& _out, const PlayerBase& _value);
	friend std::istream& operator>>(std::istream& _in, PlayerBase& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
protected:
	virtual ::vnx::RecordHeader get_info() const = 0;
	virtual void play() = 0;
	virtual void pause() = 0;
	virtual void toggle() = 0;
	virtual void stop() = 0;
	virtual void set_speed(const vnx::float64_t& speed) = 0;
	virtual void seek_by_count(const int64_t& delta_count) = 0;
	virtual void seek_by_time(const int64_t& delta_us) = 0;
	virtual void seek_to_position(const vnx::float64_t& position) = 0;
	virtual void seek_to_time(const int64_t& time_us) = 0;
	
	void vnx_handle_switch(std::shared_ptr<const vnx::Sample> _sample) override;
	std::shared_ptr<vnx::Value> vnx_call_switch(std::shared_ptr<const vnx::Value> _method, const vnx::request_id_t& _request_id) override;
	
};


} // namespace vnx

#endif // INCLUDE_vnx_PlayerBase_HXX_
