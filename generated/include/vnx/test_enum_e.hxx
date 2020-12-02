
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_test_enum_e_HXX_
#define INCLUDE_vnx_test_enum_e_HXX_

#include <vnx/Type.h>
#include <vnx/package.hxx>


namespace vnx {

struct test_enum_e {
	
	enum enum_t {
		BAR = 3694613684l,
		FOO = 3118640039l,
	};
	
	enum_t value = ::vnx::test_enum_e::enum_t(0);
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	test_enum_e() {}
	test_enum_e(const enum_t& _value) { value = _value; }
	test_enum_e(const ::vnx::test_enum_e& _other) { value = _other.value; }
	
	vnx::Hash64 get_type_hash() const;
	std::string get_type_name() const;
	const vnx::TypeCode* get_type_code() const;
	
	operator enum_t() const { return value; }
	test_enum_e& operator=(const enum_t& _value) { value = _value; return *this; }
	test_enum_e& operator=(const ::vnx::test_enum_e& _other) { value = _other.value; return *this; }
	
	static std::shared_ptr<test_enum_e> create();
	std::shared_ptr<test_enum_e> clone() const;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code);
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	void accept(vnx::Visitor& _visitor) const;
	
	std::string to_string() const;
	std::string to_string_value() const;
	std::string to_string_value_full() const;
	
	void from_string(const std::string& str);
	void from_string_value(const std::string& name);
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	vnx::Variant get_field(const std::string& name) const;
	void set_field(const std::string& name, const vnx::Variant& value);
	
	friend std::ostream& operator<<(std::ostream& _out, const test_enum_e& _value);
	friend std::istream& operator>>(std::istream& _in, test_enum_e& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};


} // namespace vnx


namespace vnx {

void read(TypeInput& in, ::vnx::test_enum_e::enum_t& value, const TypeCode* type_code, const uint16_t* code); ///< \private

void write(TypeOutput& out, const ::vnx::test_enum_e::enum_t& value, const TypeCode* type_code, const uint16_t* code); ///< \private

template<>
std::string to_string(const ::vnx::test_enum_e& _value); ///< \private

template<>
std::string to_string_value(const ::vnx::test_enum_e& _value); ///< \private

template<>
std::string to_string_value_full(const ::vnx::test_enum_e& _value); ///< \private

template<>
std::string to_string(const ::vnx::test_enum_e::enum_t& _value); ///< \private

template<>
std::string to_string_value(const ::vnx::test_enum_e::enum_t& _value); ///< \private

template<>
std::string to_string_value_full(const ::vnx::test_enum_e::enum_t& _value); ///< \private

} // vnx

#endif // INCLUDE_vnx_test_enum_e_HXX_
