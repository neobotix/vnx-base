
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_Player_ASYNC_CLIENT_HXX_
#define INCLUDE_vnx_Player_ASYNC_CLIENT_HXX_

#include <vnx/AsyncClient.h>
#include <vnx/Module.h>
#include <vnx/RecordHeader.hxx>
#include <vnx/TopicPtr.hpp>


namespace vnx {

class PlayerAsyncClient : public vnx::AsyncClient {
public:
	PlayerAsyncClient(const std::string& service_name);
	
	PlayerAsyncClient(vnx::Hash64 service_addr);
	
	uint64_t vnx_get_config_object(
			const std::function<void(const ::vnx::Object&)>& _callback = std::function<void(const ::vnx::Object&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_get_config(const std::string& name, 
			const std::function<void(const ::vnx::Variant&)>& _callback = std::function<void(const ::vnx::Variant&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_set_config_object(const ::vnx::Object& config, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_set_config(const std::string& name, const ::vnx::Variant& value, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_get_type_code(
			const std::function<void(const ::vnx::TypeCode&)>& _callback = std::function<void(const ::vnx::TypeCode&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_restart(
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t vnx_close(
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t get_info(
			const std::function<void(const ::vnx::RecordHeader&)>& _callback = std::function<void(const ::vnx::RecordHeader&)>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t play(
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t pause(
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t toggle(
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t stop(
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t set_speed(const vnx::float64_t& speed, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t seek_by_count(const int64_t& delta_count, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t seek_by_time(const int64_t& delta_us, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t seek_to_position(const vnx::float64_t& position, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	uint64_t seek_to_time(const int64_t& time_us, 
			const std::function<void()>& _callback = std::function<void()>(),
			const std::function<void(const vnx::exception&)>& _error_callback = std::function<void(const vnx::exception&)>());
	
	std::vector<uint64_t> vnx_get_pending_ids() const override;
	
protected:
	void vnx_purge_request(uint64_t _request_id, const vnx::exception& _ex) override;
	
	void vnx_callback_switch(uint64_t _request_id, std::shared_ptr<const vnx::Value> _value) override;
	
private:
	std::map<uint64_t, std::pair<std::function<void(const ::vnx::Object&)>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_get_config_object;
	std::map<uint64_t, std::pair<std::function<void(const ::vnx::Variant&)>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_get_config;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_set_config_object;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_set_config;
	std::map<uint64_t, std::pair<std::function<void(const ::vnx::TypeCode&)>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_get_type_code;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_restart;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_vnx_close;
	std::map<uint64_t, std::pair<std::function<void(const ::vnx::RecordHeader&)>, std::function<void(const vnx::exception&)>>> vnx_queue_get_info;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_play;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_pause;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_toggle;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_stop;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_set_speed;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_seek_by_count;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_seek_by_time;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_seek_to_position;
	std::map<uint64_t, std::pair<std::function<void()>, std::function<void(const vnx::exception&)>>> vnx_queue_seek_to_time;
	
};


} // namespace vnx

#endif // INCLUDE_vnx_Player_ASYNC_CLIENT_HXX_
