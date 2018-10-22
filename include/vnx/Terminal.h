 /*************************************************************************
 * 
 *  [2017] - [2018] Automy Inc. 
 *  All Rights Reserved.
 * 
 * NOTICE:  All information contained herein is, and remains
 * the property of Automy Incorporated and its suppliers,
 * if any.  The intellectual and technical concepts contained
 * herein are proprietary to Automy Incorporated
 * and its suppliers and may be covered by U.S. and Foreign Patents,
 * patents in process, and are protected by trade secret or copyright law.
 * Dissemination of this information or reproduction of this material
 * is strictly forbidden unless prior written permission is obtained
 * from Automy Incorporated.
 */

#ifndef VNX_TERMINAL_H_
#define VNX_TERMINAL_H_

#include <vnx/TerminalBase.hxx>
#include <vnx/TerminalClient.hxx>
#include <vnx/ProcessClient.hxx>


namespace vnx {

/** \brief Module that provides an interactive terminal. 
 * 
 * Press enter to activate the command prompt (will pause logging output).
 * 
 * Possible commands are:
 * - \b q or \b quit Will shutdown process.
 * - \b d or \b debug [level] Sets logging level, or sets DEBUG level if no level given, (4=DEBUG, 3=INFO, ...)
 * - \b e or \b errors Shows list of last error messages.
 * - \b t or \b topic [expr] Shows list of topic statistics, shows all in case no \p expr, otherwise only topics containing \p expr.
 * - \b grep <expr> Grep logging output, just like normal UNIX grep.
 * - \b spy [expr] Shows sample info for matching topics, or all topics in case no \p expr. Same as vnxdump -i.
 * - \b dump [expr] Dumps samples for matching topics, or all topics in case no \p expr. Same as vnxdump.
 * 
 */
class Terminal : public TerminalBase {
public:
	Terminal(const std::string& vnx_name_ = "Terminal");
	
protected:
	enum {
		INACTIVE, INPUT, DISPLAY, GREP_RUN, MODULE_RUN
	};
	
	void init();
	
	void main();
	
	void command(const std::string& cmd);
	
	void grep(const std::string& expr);
	
	void spy(const std::string& expr);
	
	void dump(const std::string& expr);
	
	void topic_info(const std::string& expr);
	
	void handle(std::shared_ptr<const LogMsg> value);
	
private:
	void read_loop();
	
private:
	Hash64 service_addr;
	ProcessClient process;
	
	int state = INACTIVE;
	std::string grep_filter;
	Handle<Module> module;
	std::list<std::shared_ptr<const LogMsg>> error_history;
	
};


} // vnx

#endif /* VNX_TERMINAL_H_ */
