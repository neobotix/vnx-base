
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_ProxyBase_HXX_
#define INCLUDE_vnx_ProxyBase_HXX_

#include <vnx/package.hxx>
#include <vnx/Hash64.h>
#include <vnx/Module.h>
#include <vnx/TopicInfoList.hxx>


namespace vnx {

class ProxyBase : public ::vnx::Module {
public:
	
	::std::string address;
	::std::vector<::std::string> import_list;
	::std::vector<::std::string> export_list;
	::std::vector<::std::string> forward_list;
	::std::map<::vnx::Hash64, ::std::string> tunnel_map;
	::vnx::Hash64 receive_tunnel;
	::vnx::Hash64 request_tunnel;
	::vnx::bool_t auto_import = false;
	::vnx::bool_t time_sync = false;
	::vnx::bool_t json_output = false;
	::int32_t max_queue_ms = 100;
	::int32_t max_hop_count = 10;
	
	typedef ::vnx::Module Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	ProxyBase(const std::string& _vnx_name);
	
	vnx::Hash64 get_type_hash() const;
	const char* get_type_name() const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	friend std::ostream& operator<<(std::ostream& _out, const ProxyBase& _value);
	friend std::istream& operator>>(std::istream& _in, ProxyBase& _value);
	
	static const vnx::TypeCode* get_type_code();
	static std::shared_ptr<vnx::TypeCode> create_type_code();
	
protected:
	virtual void disable_export(const ::std::string& topic_name) = 0;
	virtual void disable_forward(const ::std::string& service_name) = 0;
	virtual void disable_import(const ::std::string& topic_name) = 0;
	virtual void disable_tunnel(const ::vnx::Hash64& tunnel_addr) = 0;
	virtual void enable_export(const ::std::string& topic_name) = 0;
	virtual void enable_forward(const ::std::string& service_name, const ::int32_t& max_queue_ms) = 0;
	virtual void enable_import(const ::std::string& topic_name) = 0;
	virtual void enable_tunnel(const ::vnx::Hash64& tunnel_addr, const ::std::string& service_name, const ::int32_t& max_queue_ms) = 0;
	virtual void handle(std::shared_ptr<const ::vnx::TopicInfoList> _value, std::shared_ptr<const ::vnx::Sample> _sample) { handle(_value); }
	virtual void handle(std::shared_ptr<const ::vnx::TopicInfoList> _value) {}
	virtual void on_connect() = 0;
	virtual void on_disconnect() = 0;
	
	void handle_switch(std::shared_ptr<const ::vnx::Sample> _sample);
	bool call_switch(vnx::TypeInput& _in, vnx::TypeOutput& _out, const vnx::TypeCode* _call_type, const vnx::TypeCode* _return_type);
	
};


} // namespace vnx

#endif // INCLUDE_vnx_ProxyBase_HXX_
