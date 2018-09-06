
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_ServerBase_HXX_
#define INCLUDE_vnx_ServerBase_HXX_

#include <vnx/package.hxx>
#include <vnx/Module.h>


namespace vnx {

class ServerBase : public ::vnx::Module {
public:
	
	::std::string address;
	::std::vector<::std::string> export_list;
	::int32_t max_queue_ms = 100;
	
	typedef ::vnx::Module Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	ServerBase(const std::string& _vnx_name);
	
	vnx::Hash64 get_type_hash() const;
	const char* get_type_name() const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	friend std::ostream& operator<<(std::ostream& _out, const ServerBase& _value);
	friend std::istream& operator>>(std::istream& _in, ServerBase& _value);
	
	static const vnx::TypeCode* get_type_code();
	static std::shared_ptr<vnx::TypeCode> create_type_code();
	
protected:
	
	void handle_switch(std::shared_ptr<const ::vnx::Sample> _sample);
	bool call_switch(vnx::TypeInput& _in, vnx::TypeOutput& _out, const vnx::TypeCode* _call_type, const vnx::TypeCode* _return_type);
	
};


} // namespace vnx

#endif // INCLUDE_vnx_ServerBase_HXX_
