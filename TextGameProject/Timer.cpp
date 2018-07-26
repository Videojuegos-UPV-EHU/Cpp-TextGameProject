#include "stdafx.h"
#include "Timer.h"

Timer::Timer()
{
	m_t0 = high_resolution_clock::now();
}


Timer::~Timer()
{
}

void Timer::start()
{
	m_t0= high_resolution_clock::now();
}

double Timer::getElapsedTime(bool restart)
{
	m_t1 = high_resolution_clock::now();

	auto elapsedTime = m_t1 - m_t0;

	if (restart)
		m_t0 = m_t1;

	return (duration<double, std::ratio<1>>(elapsedTime)).count();;
}