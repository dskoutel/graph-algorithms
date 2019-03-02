#ifndef UTILITIES_TIMER_HPP_
#define UTILITIES_TIMER_HPP_

#include <chrono>
#include <ctime>
#include <string>

typedef std::chrono::time_point<std::chrono::system_clock> timeInst;
typedef std::chrono::duration<double> timeStamp;

namespace profile {

class Timer {
public:
	Timer( const char *fun );
	~Timer();

	void timerInitInfo();
	void timerFinitInfo();

private:
	std::string m_fun;
	timeInst m_start_time;
	timeInst m_end_time;
};

} /* namespace profile */

#endif /* UTILITIES_TIMER_HPP_ */
