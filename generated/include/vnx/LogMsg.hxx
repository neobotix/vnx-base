
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_LogMsg_HXX_
#define INCLUDE_vnx_LogMsg_HXX_

#include <vnx/package.hxx>
#include <vnx/Value.h>


namespace vnx {

class LogMsg : public ::vnx::Value {
public:
	static const int32_t ERROR = 1;
	static const int32_t WARN = 2;
	static const int32_t INFO = 3;
	static const int32_t DEBUG = 4;
	
	int64_t time = 0;
	int32_t level = 0;
	int32_t display_level = 3;
	std::string process;
	std::string module;
	std::string message;
	
	typedef ::vnx::Value Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	vnx::Hash64 get_type_hash() const override;
	const char* get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	virtual std::string get_output() const;
	
	static std::shared_ptr<LogMsg> create();
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
	
	friend std::ostream& operator<<(std::ostream& _out, const LogMsg& _value);
	friend std::istream& operator>>(std::istream& _in, LogMsg& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};


} // namespace vnx

#endif // INCLUDE_vnx_LogMsg_HXX_
