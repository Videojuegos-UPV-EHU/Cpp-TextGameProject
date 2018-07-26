#pragma once

#include <chrono>
using namespace std::chrono;

class Timer
{
	high_resolution_clock::time_point m_t0, m_t1;
public:
	Timer();
	~Timer();

	void start();
	double getElapsedTime(bool restart = false);
};

