
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_RecorderBase_HXX_
#define INCLUDE_vnx_RecorderBase_HXX_

#include <vnx/package.hxx>
#include <vnx/Hash64.h>
#include <vnx/Module.h>


namespace vnx {

class RecorderBase : public ::vnx::Module {
public:
	
	::std::string filename;
	::int32_t max_queue_ms = 1000;
	::int32_t flush_interval_ms = 1000;
	::int32_t header_size = 262144;
	::int32_t block_size = 4096;
	::std::vector<::std::string> topics;
	::std::string proxy_name;
	::vnx::Hash64 receive_tunnel;
	
	typedef ::vnx::Module Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	RecorderBase(const std::string& _vnx_name);
	
	vnx::Hash64 get_type_hash() const;
	const char* get_type_name() const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	friend std::ostream& operator<<(std::ostream& _out, const RecorderBase& _value);
	friend std::istream& operator>>(std::istream& _in, RecorderBase& _value);
	
	static const vnx::TypeCode* get_type_code();
	static std::shared_ptr<vnx::TypeCode> create_type_code();
	
protected:
	
	void handle_switch(std::shared_ptr<const ::vnx::Sample> _sample);
	bool call_switch(vnx::TypeInput& _in, vnx::TypeOutput& _out, const vnx::TypeCode* _call_type, const vnx::TypeCode* _return_type);
	
};


} // namespace vnx

#endif // INCLUDE_vnx_RecorderBase_HXX_
