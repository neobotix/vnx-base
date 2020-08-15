
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_ModuleInfo_HXX_
#define INCLUDE_vnx_ModuleInfo_HXX_

#include <vnx/package.hxx>
#include <vnx/Endpoint.hxx>
#include <vnx/Hash64.hpp>
#include <vnx/TypeCode.hpp>
#include <vnx/Value.h>


namespace vnx {

class ModuleInfo : public ::vnx::Value {
public:
	
	int64_t time = 0;
	::vnx::Hash64 id;
	::vnx::Hash64 src_mac;
	std::string name;
	std::string type;
	int64_t num_async_pending = 0;
	int64_t num_async_process = 0;
	std::vector<std::string> sub_topics;
	std::vector<std::string> pub_topics;
	std::map<::vnx::Hash64, std::shared_ptr<const ::vnx::Endpoint>> remotes;
	::vnx::TypeCode type_code;
	
	typedef ::vnx::Value Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	vnx::Hash64 get_type_hash() const override;
	const char* get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<ModuleInfo> create();
	std::shared_ptr<vnx::Value> clone() const;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code);
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	vnx::Variant get_field(const std::string& name) const;
	void set_field(const std::string& name, const vnx::Variant& value);
	
	friend std::ostream& operator<<(std::ostream& _out, const ModuleInfo& _value);
	friend std::istream& operator>>(std::istream& _in, ModuleInfo& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};


} // namespace vnx

#endif // INCLUDE_vnx_ModuleInfo_HXX_
