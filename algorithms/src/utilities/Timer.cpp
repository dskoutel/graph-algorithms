/*
 * Timer.cpp
 *
 *  Created on: 9 ??? 2019
 *      Author: User
 */

#include "Timer.hpp"
#include <iostream>

namespace profile {

Timer::Timer( const char *fun ):
	m_fun(fun)
{
	m_start_time = std::chrono::system_clock::now();
	timerInitInfo();
}

Timer::~Timer() {

	m_end_time = std::chrono::system_clock::now();
	timerFinitInfo();
}

void Timer::timerFinitInfo()
{
	timeStamp elapsed_seconds = m_end_time - m_start_time;
	std::time_t end_time = std::chrono::system_clock::to_time_t(m_end_time);
	std::cout << "Profiler::"<< m_fun << " Finished at " << std::ctime(&end_time) << "Elapsed time: " << elapsed_seconds.count() << std::endl;
}

void Timer::timerInitInfo()
{
	std::time_t start_time = std::chrono::system_clock::to_time_t(m_start_time);
	std::cout << "Profiler::"<< m_fun << " Started at " << std::ctime(&start_time) << std::endl;
}

}

/* namespace profile */
