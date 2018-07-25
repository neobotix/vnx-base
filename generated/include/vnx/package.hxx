
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_vnx_PACKAGE_HXX_
#define INCLUDE_vnx_PACKAGE_HXX_

#include <vnx/Type.h>


namespace vnx {

extern std::shared_ptr<vnx::Topic> log_out;
extern std::shared_ptr<vnx::Topic> module_info;
extern std::shared_ptr<vnx::Topic> player_status;
extern std::shared_ptr<vnx::Topic> shutdown;
extern std::shared_ptr<vnx::Topic> time_control;
extern std::shared_ptr<vnx::Topic> time_sync;
extern std::shared_ptr<vnx::Topic> topic_info;

class Endpoint;
class Exception;
class Hash64;
class InternalError;
class LogMsg;
class Marker;
class Message;
class NoSuchMethod;
class NoSuchService;
class PlayerBase;
class PlayerStatus;
class ProcessBase;
class ProxyBase;
class RecordHeader;
class RecordIndex;
class RecorderBase;
class RecorderStatus;
class Request;
class Return;
class RouterBase;
class Sample;
class ServerBase;
class SpyToolBase;
class TcpEndpoint;
class TerminalBase;
class TimeControl;
class TimeServerBase;
class TimeSync;
class TopicInfo;
class TopicInfoList;
class TopicPtr;
class UnixEndpoint;
struct record_index_entry_t;
struct record_topic_info_t;

} // namespace vnx


namespace vnx {

void read(TypeInput& in, ::vnx::Endpoint& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::Exception& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::Hash64& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::InternalError& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::LogMsg& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::Marker& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::Message& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::NoSuchMethod& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::NoSuchService& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::PlayerBase& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::PlayerStatus& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::ProcessBase& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::ProxyBase& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::RecordHeader& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::RecordIndex& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::RecorderBase& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::RecorderStatus& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::Request& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::Return& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::RouterBase& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::Sample& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::ServerBase& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::SpyToolBase& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::TcpEndpoint& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::TerminalBase& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::TimeControl& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::TimeServerBase& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::TimeSync& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::TopicInfo& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::TopicInfoList& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::TopicPtr& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::UnixEndpoint& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::record_index_entry_t& value, const TypeCode* type_code, const uint16_t* code);
void read(TypeInput& in, ::vnx::record_topic_info_t& value, const TypeCode* type_code, const uint16_t* code);

void write(TypeOutput& out, const ::vnx::Endpoint& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::Exception& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::Hash64& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::InternalError& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::LogMsg& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::Marker& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::Message& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::NoSuchMethod& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::NoSuchService& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::PlayerBase& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::PlayerStatus& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::ProcessBase& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::ProxyBase& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::RecordHeader& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::RecordIndex& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::RecorderBase& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::RecorderStatus& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::Request& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::Return& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::RouterBase& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::Sample& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::ServerBase& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::SpyToolBase& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::TcpEndpoint& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::TerminalBase& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::TimeControl& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::TimeServerBase& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::TimeSync& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::TopicInfo& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::TopicInfoList& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::TopicPtr& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::UnixEndpoint& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::record_index_entry_t& value, const TypeCode* type_code, const uint16_t* code);
void write(TypeOutput& out, const ::vnx::record_topic_info_t& value, const TypeCode* type_code, const uint16_t* code);

void read(std::istream& in, ::vnx::Endpoint& value);
void read(std::istream& in, ::vnx::Exception& value);
void read(std::istream& in, ::vnx::Hash64& value);
void read(std::istream& in, ::vnx::InternalError& value);
void read(std::istream& in, ::vnx::LogMsg& value);
void read(std::istream& in, ::vnx::Marker& value);
void read(std::istream& in, ::vnx::Message& value);
void read(std::istream& in, ::vnx::NoSuchMethod& value);
void read(std::istream& in, ::vnx::NoSuchService& value);
void read(std::istream& in, ::vnx::PlayerBase& value);
void read(std::istream& in, ::vnx::PlayerStatus& value);
void read(std::istream& in, ::vnx::ProcessBase& value);
void read(std::istream& in, ::vnx::ProxyBase& value);
void read(std::istream& in, ::vnx::RecordHeader& value);
void read(std::istream& in, ::vnx::RecordIndex& value);
void read(std::istream& in, ::vnx::RecorderBase& value);
void read(std::istream& in, ::vnx::RecorderStatus& value);
void read(std::istream& in, ::vnx::Request& value);
void read(std::istream& in, ::vnx::Return& value);
void read(std::istream& in, ::vnx::RouterBase& value);
void read(std::istream& in, ::vnx::Sample& value);
void read(std::istream& in, ::vnx::ServerBase& value);
void read(std::istream& in, ::vnx::SpyToolBase& value);
void read(std::istream& in, ::vnx::TcpEndpoint& value);
void read(std::istream& in, ::vnx::TerminalBase& value);
void read(std::istream& in, ::vnx::TimeControl& value);
void read(std::istream& in, ::vnx::TimeServerBase& value);
void read(std::istream& in, ::vnx::TimeSync& value);
void read(std::istream& in, ::vnx::TopicInfo& value);
void read(std::istream& in, ::vnx::TopicInfoList& value);
void read(std::istream& in, ::vnx::TopicPtr& value);
void read(std::istream& in, ::vnx::UnixEndpoint& value);
void read(std::istream& in, ::vnx::record_index_entry_t& value);
void read(std::istream& in, ::vnx::record_topic_info_t& value);

void write(std::ostream& out, const ::vnx::Endpoint& value);
void write(std::ostream& out, const ::vnx::Exception& value);
void write(std::ostream& out, const ::vnx::Hash64& value);
void write(std::ostream& out, const ::vnx::InternalError& value);
void write(std::ostream& out, const ::vnx::LogMsg& value);
void write(std::ostream& out, const ::vnx::Marker& value);
void write(std::ostream& out, const ::vnx::Message& value);
void write(std::ostream& out, const ::vnx::NoSuchMethod& value);
void write(std::ostream& out, const ::vnx::NoSuchService& value);
void write(std::ostream& out, const ::vnx::PlayerBase& value);
void write(std::ostream& out, const ::vnx::PlayerStatus& value);
void write(std::ostream& out, const ::vnx::ProcessBase& value);
void write(std::ostream& out, const ::vnx::ProxyBase& value);
void write(std::ostream& out, const ::vnx::RecordHeader& value);
void write(std::ostream& out, const ::vnx::RecordIndex& value);
void write(std::ostream& out, const ::vnx::RecorderBase& value);
void write(std::ostream& out, const ::vnx::RecorderStatus& value);
void write(std::ostream& out, const ::vnx::Request& value);
void write(std::ostream& out, const ::vnx::Return& value);
void write(std::ostream& out, const ::vnx::RouterBase& value);
void write(std::ostream& out, const ::vnx::Sample& value);
void write(std::ostream& out, const ::vnx::ServerBase& value);
void write(std::ostream& out, const ::vnx::SpyToolBase& value);
void write(std::ostream& out, const ::vnx::TcpEndpoint& value);
void write(std::ostream& out, const ::vnx::TerminalBase& value);
void write(std::ostream& out, const ::vnx::TimeControl& value);
void write(std::ostream& out, const ::vnx::TimeServerBase& value);
void write(std::ostream& out, const ::vnx::TimeSync& value);
void write(std::ostream& out, const ::vnx::TopicInfo& value);
void write(std::ostream& out, const ::vnx::TopicInfoList& value);
void write(std::ostream& out, const ::vnx::TopicPtr& value);
void write(std::ostream& out, const ::vnx::UnixEndpoint& value);
void write(std::ostream& out, const ::vnx::record_index_entry_t& value);
void write(std::ostream& out, const ::vnx::record_topic_info_t& value);

void accept(Visitor& visitor, const ::vnx::Endpoint& value);
void accept(Visitor& visitor, const ::vnx::Exception& value);
void accept(Visitor& visitor, const ::vnx::Hash64& value);
void accept(Visitor& visitor, const ::vnx::InternalError& value);
void accept(Visitor& visitor, const ::vnx::LogMsg& value);
void accept(Visitor& visitor, const ::vnx::Marker& value);
void accept(Visitor& visitor, const ::vnx::Message& value);
void accept(Visitor& visitor, const ::vnx::NoSuchMethod& value);
void accept(Visitor& visitor, const ::vnx::NoSuchService& value);
void accept(Visitor& visitor, const ::vnx::PlayerBase& value);
void accept(Visitor& visitor, const ::vnx::PlayerStatus& value);
void accept(Visitor& visitor, const ::vnx::ProcessBase& value);
void accept(Visitor& visitor, const ::vnx::ProxyBase& value);
void accept(Visitor& visitor, const ::vnx::RecordHeader& value);
void accept(Visitor& visitor, const ::vnx::RecordIndex& value);
void accept(Visitor& visitor, const ::vnx::RecorderBase& value);
void accept(Visitor& visitor, const ::vnx::RecorderStatus& value);
void accept(Visitor& visitor, const ::vnx::Request& value);
void accept(Visitor& visitor, const ::vnx::Return& value);
void accept(Visitor& visitor, const ::vnx::RouterBase& value);
void accept(Visitor& visitor, const ::vnx::Sample& value);
void accept(Visitor& visitor, const ::vnx::ServerBase& value);
void accept(Visitor& visitor, const ::vnx::SpyToolBase& value);
void accept(Visitor& visitor, const ::vnx::TcpEndpoint& value);
void accept(Visitor& visitor, const ::vnx::TerminalBase& value);
void accept(Visitor& visitor, const ::vnx::TimeControl& value);
void accept(Visitor& visitor, const ::vnx::TimeServerBase& value);
void accept(Visitor& visitor, const ::vnx::TimeSync& value);
void accept(Visitor& visitor, const ::vnx::TopicInfo& value);
void accept(Visitor& visitor, const ::vnx::TopicInfoList& value);
void accept(Visitor& visitor, const ::vnx::TopicPtr& value);
void accept(Visitor& visitor, const ::vnx::UnixEndpoint& value);
void accept(Visitor& visitor, const ::vnx::record_index_entry_t& value);
void accept(Visitor& visitor, const ::vnx::record_topic_info_t& value);

template<>
struct type<::vnx::Endpoint> {
	void read(TypeInput& in, ::vnx::Endpoint& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::Endpoint& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::Endpoint& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::Endpoint& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::Endpoint& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::Exception> {
	void read(TypeInput& in, ::vnx::Exception& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::Exception& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::Exception& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::Exception& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::Exception& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::Hash64> {
	void read(TypeInput& in, ::vnx::Hash64& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::Hash64& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::Hash64& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::Hash64& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::Hash64& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::InternalError> {
	void read(TypeInput& in, ::vnx::InternalError& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::InternalError& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::InternalError& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::InternalError& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::InternalError& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::LogMsg> {
	void read(TypeInput& in, ::vnx::LogMsg& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::LogMsg& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::LogMsg& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::LogMsg& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::LogMsg& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::Marker> {
	void read(TypeInput& in, ::vnx::Marker& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::Marker& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::Marker& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::Marker& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::Marker& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::Message> {
	void read(TypeInput& in, ::vnx::Message& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::Message& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::Message& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::Message& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::Message& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::NoSuchMethod> {
	void read(TypeInput& in, ::vnx::NoSuchMethod& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::NoSuchMethod& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::NoSuchMethod& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::NoSuchMethod& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::NoSuchMethod& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::NoSuchService> {
	void read(TypeInput& in, ::vnx::NoSuchService& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::NoSuchService& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::NoSuchService& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::NoSuchService& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::NoSuchService& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::PlayerBase> {
	void read(TypeInput& in, ::vnx::PlayerBase& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::PlayerBase& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::PlayerBase& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::PlayerBase& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::PlayerBase& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::PlayerStatus> {
	void read(TypeInput& in, ::vnx::PlayerStatus& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::PlayerStatus& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::PlayerStatus& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::PlayerStatus& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::PlayerStatus& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::ProcessBase> {
	void read(TypeInput& in, ::vnx::ProcessBase& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::ProcessBase& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::ProcessBase& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::ProcessBase& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::ProcessBase& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::ProxyBase> {
	void read(TypeInput& in, ::vnx::ProxyBase& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::ProxyBase& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::ProxyBase& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::ProxyBase& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::ProxyBase& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::RecordHeader> {
	void read(TypeInput& in, ::vnx::RecordHeader& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::RecordHeader& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::RecordHeader& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::RecordHeader& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::RecordHeader& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::RecordIndex> {
	void read(TypeInput& in, ::vnx::RecordIndex& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::RecordIndex& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::RecordIndex& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::RecordIndex& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::RecordIndex& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::RecorderBase> {
	void read(TypeInput& in, ::vnx::RecorderBase& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::RecorderBase& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::RecorderBase& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::RecorderBase& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::RecorderBase& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::RecorderStatus> {
	void read(TypeInput& in, ::vnx::RecorderStatus& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::RecorderStatus& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::RecorderStatus& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::RecorderStatus& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::RecorderStatus& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::Request> {
	void read(TypeInput& in, ::vnx::Request& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::Request& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::Request& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::Request& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::Request& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::Return> {
	void read(TypeInput& in, ::vnx::Return& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::Return& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::Return& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::Return& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::Return& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::RouterBase> {
	void read(TypeInput& in, ::vnx::RouterBase& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::RouterBase& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::RouterBase& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::RouterBase& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::RouterBase& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::Sample> {
	void read(TypeInput& in, ::vnx::Sample& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::Sample& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::Sample& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::Sample& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::Sample& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::ServerBase> {
	void read(TypeInput& in, ::vnx::ServerBase& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::ServerBase& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::ServerBase& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::ServerBase& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::ServerBase& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::SpyToolBase> {
	void read(TypeInput& in, ::vnx::SpyToolBase& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::SpyToolBase& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::SpyToolBase& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::SpyToolBase& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::SpyToolBase& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::TcpEndpoint> {
	void read(TypeInput& in, ::vnx::TcpEndpoint& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::TcpEndpoint& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::TcpEndpoint& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::TcpEndpoint& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::TcpEndpoint& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::TerminalBase> {
	void read(TypeInput& in, ::vnx::TerminalBase& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::TerminalBase& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::TerminalBase& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::TerminalBase& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::TerminalBase& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::TimeControl> {
	void read(TypeInput& in, ::vnx::TimeControl& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::TimeControl& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::TimeControl& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::TimeControl& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::TimeControl& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::TimeServerBase> {
	void read(TypeInput& in, ::vnx::TimeServerBase& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::TimeServerBase& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::TimeServerBase& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::TimeServerBase& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::TimeServerBase& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::TimeSync> {
	void read(TypeInput& in, ::vnx::TimeSync& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::TimeSync& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::TimeSync& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::TimeSync& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::TimeSync& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::TopicInfo> {
	void read(TypeInput& in, ::vnx::TopicInfo& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::TopicInfo& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::TopicInfo& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::TopicInfo& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::TopicInfo& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::TopicInfoList> {
	void read(TypeInput& in, ::vnx::TopicInfoList& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::TopicInfoList& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::TopicInfoList& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::TopicInfoList& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::TopicInfoList& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::TopicPtr> {
	void read(TypeInput& in, ::vnx::TopicPtr& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::TopicPtr& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::TopicPtr& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::TopicPtr& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::TopicPtr& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::UnixEndpoint> {
	void read(TypeInput& in, ::vnx::UnixEndpoint& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::UnixEndpoint& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::UnixEndpoint& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::UnixEndpoint& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::UnixEndpoint& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::record_index_entry_t> {
	void read(TypeInput& in, ::vnx::record_index_entry_t& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::record_index_entry_t& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::record_index_entry_t& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::record_index_entry_t& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::record_index_entry_t& value) {
		vnx::accept(visitor, value);
	}
};

template<>
struct type<::vnx::record_topic_info_t> {
	void read(TypeInput& in, ::vnx::record_topic_info_t& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::read(in, value, type_code, code);
	}
	void write(TypeOutput& out, const ::vnx::record_topic_info_t& value, const TypeCode* type_code, const uint16_t* code) {
		vnx::write(out, value, type_code, code);
	}
	void read(std::istream& in, ::vnx::record_topic_info_t& value) {
		vnx::read(in, value);
	}
	void write(std::ostream& out, const ::vnx::record_topic_info_t& value) {
		vnx::write(out, value);
	}
	void accept(Visitor& visitor, const ::vnx::record_topic_info_t& value) {
		vnx::accept(visitor, value);
	}
};


} // namespace vnx

#endif // INCLUDE_vnx_PACKAGE_HXX_
