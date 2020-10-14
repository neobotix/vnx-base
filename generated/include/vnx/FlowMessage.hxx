
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_FlowMessage_HXX_
#define INCLUDE_vnx_FlowMessage_HXX_

#include <vnx/package.hxx>
#include <vnx/Hash64.hpp>
#include <vnx/Message.hxx>


namespace vnx {

class FlowMessage : public ::vnx::Message {
public:
	static const uint16_t OPEN = 1;
	static const uint16_t PING = 2;
	static const uint16_t CLOSE = 3;
	
	::vnx::Hash64 src_mac;
	::vnx::Hash64 dst_mac;
	uint16_t flow_code = 0;
	
	typedef ::vnx::Message Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	vnx::Hash64 get_type_hash() const override;
	const char* get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<FlowMessage> create();
	std::shared_ptr<vnx::Value> clone() const override;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) override;
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const override;
	
	void read(std::istream& _in) override;
	void write(std::ostream& _out) const override;
	
	void accept(vnx::Visitor& _visitor) const override;
	
	vnx::Object to_object() const override;
	void from_object(const vnx::Object& object) override;
	
	vnx::Variant get_field(const std::string& name) const override;
	void set_field(const std::string& name, const vnx::Variant& value) override;
	
	friend std::ostream& operator<<(std::ostream& _out, const FlowMessage& _value);
	friend std::istream& operator>>(std::istream& _in, FlowMessage& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};


} // namespace vnx

#endif // INCLUDE_vnx_FlowMessage_HXX_
