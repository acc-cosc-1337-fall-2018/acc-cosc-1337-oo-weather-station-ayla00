#ifndef CLOCK_H
#define CLOCK_H
#include<chrono>

class Clock 
{
public: //access identifier (public or private)
	Clock() // you can add a ; after clock and define it in clock.cpp
	{ //constructor, help build data for class, initiates class if no parameters are passed
		//assignment (of data)
		seconds = std::chrono::system_clock::now().time_since_epoch() /
			std::chrono::seconds(1);
	}
	Clock(long long sec) : seconds(sec) {} //initialization
	int get_hours() const;
	int get_minutes() const;
	int get_seconds() const;
	void display_time();

private:
	long long seconds;
	void update_time();

};

#endif // CLOCK_H