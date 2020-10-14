
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_ServerBase_HXX_
#define INCLUDE_vnx_ServerBase_HXX_

#include <vnx/package.hxx>
#include <vnx/Module.h>
#include <vnx/TopicPtr.hpp>


namespace vnx {

class ServerBase : public ::vnx::Module {
public:
	
	std::string address;
	std::vector<::vnx::TopicPtr> export_list;
	int32_t max_queue_ms = 100;
	
	typedef ::vnx::Module Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	ServerBase(const std::string& _vnx_name);
	
	vnx::Hash64 get_type_hash() const override;
	const char* get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	void read(std::istream& _in) override;
	void write(std::ostream& _out) const override;
	
	void accept(vnx::Visitor& _visitor) const override;
	
	vnx::Object to_object() const override;
	void from_object(const vnx::Object& object) override;
	
	vnx::Variant get_field(const std::string& name) const override;
	void set_field(const std::string& name, const vnx::Variant& value) override;
	
	friend std::ostream& operator<<(std::ostream& _out, const ServerBase& _value);
	friend std::istream& operator>>(std::istream& _in, ServerBase& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
protected:
	
	void vnx_handle_switch(std::shared_ptr<const vnx::Sample> _sample) override;
	std::shared_ptr<vnx::Value> vnx_call_switch(std::shared_ptr<const vnx::Value> _method, const vnx::request_id_t& _request_id) override;
	
};


} // namespace vnx

#endif // INCLUDE_vnx_ServerBase_HXX_
