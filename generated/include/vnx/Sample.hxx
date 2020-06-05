
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_Sample_HXX_
#define INCLUDE_vnx_Sample_HXX_

#include <vnx/package.hxx>
#include <vnx/Hash64.hpp>
#include <vnx/Message.hxx>
#include <vnx/TopicPtr.hpp>
#include <vnx/Value.h>


namespace vnx {

class Sample : public ::vnx::Message {
public:
	
	::vnx::Hash64 src_mac;
	uint64_t seq_num = 0;
	int64_t recv_time = 0;
	::vnx::TopicPtr topic;
	std::shared_ptr<const ::vnx::Value> value;
	
	typedef ::vnx::Message Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	vnx::Hash64 get_type_hash() const override;
	const char* get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	static std::shared_ptr<Sample> create();
	std::shared_ptr<vnx::Value> clone() const;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code);
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	friend std::ostream& operator<<(std::ostream& _out, const Sample& _value);
	friend std::istream& operator>>(std::istream& _in, Sample& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};


} // namespace vnx

#endif // INCLUDE_vnx_Sample_HXX_
