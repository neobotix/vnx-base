
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_TerminalBase_HXX_
#define INCLUDE_vnx_TerminalBase_HXX_

#include <vnx/package.hxx>
#include <vnx/LogMsg.hxx>
#include <vnx/Module.h>
#include <vnx/ModuleInfo.hxx>
#include <vnx/terminal_event_e.hxx>


namespace vnx {

class TerminalBase : public ::vnx::Module {
public:
	
	int32_t max_history = 50;
	int32_t max_list_size = 1000;
	std::string prompt = "> ";
	
	typedef ::vnx::Module Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	TerminalBase(const std::string& _vnx_name);
	
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
	
	friend std::ostream& operator<<(std::ostream& _out, const TerminalBase& _value);
	friend std::istream& operator>>(std::istream& _in, TerminalBase& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
protected:
	virtual void command(const std::vector<std::string>& commandline) = 0;
	virtual void read_char(const int8_t& c) = 0;
	virtual void read_event(const ::vnx::terminal_event_e& event) = 0;
	virtual void grep(const std::string& expr) = 0;
	virtual void spy(const std::string& expr) = 0;
	virtual void dump(const std::string& expr) = 0;
	virtual void topic_info(const std::string& expr) = 0;
	virtual void module_info(const std::string& expr) = 0;
	virtual void handle(std::shared_ptr<const ::vnx::LogMsg> _value) {}
	virtual void handle(std::shared_ptr<const ::vnx::ModuleInfo> _value) {}
	
	void vnx_handle_switch(std::shared_ptr<const vnx::Sample> _sample) override;
	std::shared_ptr<vnx::Value> vnx_call_switch(std::shared_ptr<const vnx::Value> _method, const vnx::request_id_t& _request_id) override;
	
};


} // namespace vnx

#endif // INCLUDE_vnx_TerminalBase_HXX_
