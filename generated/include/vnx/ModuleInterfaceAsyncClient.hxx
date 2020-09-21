
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_ModuleInterface_ASYNC_CLIENT_HXX_
#define INCLUDE_vnx_ModuleInterface_ASYNC_CLIENT_HXX_

#include <vnx/AsyncClient.h>
#include <vnx/Object.hpp>
#include <vnx/TypeCode.hpp>
#include <vnx/Variant.hpp>


namespace vnx {

class ModuleInterfaceAsyncClient : public vnx::AsyncClient {
public:
	ModuleInterfaceAsyncClient(const std::string& service_name);
	
	ModuleInterfaceAsyncClient(vnx::Hash64 service_addr);
	
	uint64_t vnx_get_config_object(
			const std::function<void(::vnx::Object)>& _callback = std::function<void(::vnx::Object)>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t vnx_get_config(const std::string& name, 
			const std::function<void(::vnx::Variant)>& _callback = std::function<void(::vnx::Variant)>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t vnx_set_config_object(const ::vnx::Object& config, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t vnx_set_config(const std::string& name, const ::vnx::Variant& value, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t vnx_get_type_code(
			const std::function<void(::vnx::TypeCode)>& _callback = std::function<void(::vnx::TypeCode)>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t vnx_restart(
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	uint64_t vnx_close(
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const std::exception&)>& _error_callback = std::function<void(const std::exception&)>());
	
	std::vector<uint64_t> vnx_get_pending_ids() const override;
	
protected:
	void vnx_purge_request(uint64_t _request_id, const std::exception& _ex) override;
	
	void vnx_callback_switch(uint64_t _request_id, std::shared_ptr<const vnx::Value> _value) override;
	
private:
	std::map<uint64_t, std::pair<std::function<void(::vnx::Object)>, std::function<void(const std::exception&)>>> vnx_queue_vnx_get_config_object;
	std::map<uint64_t, std::pair<std::function<void(::vnx::Variant)>, std::function<void(const std::exception&)>>> vnx_queue_vnx_get_config;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const std::exception&)>>> vnx_queue_vnx_set_config_object;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const std::exception&)>>> vnx_queue_vnx_set_config;
	std::map<uint64_t, std::pair<std::function<void(::vnx::TypeCode)>, std::function<void(const std::exception&)>>> vnx_queue_vnx_get_type_code;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const std::exception&)>>> vnx_queue_vnx_restart;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const std::exception&)>>> vnx_queue_vnx_close;
	
};


} // namespace vnx

#endif // INCLUDE_vnx_ModuleInterface_ASYNC_CLIENT_HXX_