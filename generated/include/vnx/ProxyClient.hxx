
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_Proxy_CLIENT_HXX_
#define INCLUDE_vnx_Proxy_CLIENT_HXX_

#include <vnx/Client.h>
#include <vnx/Hash64.h>
#include <vnx/Module.h>
#include <vnx/TopicInfoList.hxx>


namespace vnx {

class ProxyClient : public vnx::Client {
public:
	ProxyClient(const std::string& service_name);
	
	ProxyClient(vnx::Hash64 service_addr);
	
	void disable_export(const ::std::string& topic_name);
	
	void disable_export_async(const ::std::string& topic_name);
	
	void disable_forward(const ::std::string& service_name);
	
	void disable_forward_async(const ::std::string& service_name);
	
	void disable_import(const ::std::string& topic_name);
	
	void disable_import_async(const ::std::string& topic_name);
	
	void disable_tunnel(const ::vnx::Hash64& tunnel_addr);
	
	void disable_tunnel_async(const ::vnx::Hash64& tunnel_addr);
	
	void enable_export(const ::std::string& topic_name);
	
	void enable_export_async(const ::std::string& topic_name);
	
	void enable_forward(const ::std::string& service_name, const ::int32_t& max_queue_ms);
	
	void enable_forward_async(const ::std::string& service_name, const ::int32_t& max_queue_ms);
	
	void enable_import(const ::std::string& topic_name);
	
	void enable_import_async(const ::std::string& topic_name);
	
	void enable_tunnel(const ::vnx::Hash64& tunnel_addr, const ::std::string& serive_name, const ::int32_t& max_queue_ms);
	
	void enable_tunnel_async(const ::vnx::Hash64& tunnel_addr, const ::std::string& serive_name, const ::int32_t& max_queue_ms);
	
	void handle(const ::std::shared_ptr<const ::vnx::TopicInfoList>& sample);
	
	void handle_async(const ::std::shared_ptr<const ::vnx::TopicInfoList>& sample);
	
	void on_connect();
	
	void on_connect_async();
	
	void on_disconnect();
	
	void on_disconnect_async();
	
};


} // namespace vnx

#endif // INCLUDE_vnx_Proxy_CLIENT_HXX_
