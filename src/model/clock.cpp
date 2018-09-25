#include "clock.h"
#include<iostream>

int Clock::get_hours() const // "::" is the scope operator tells get_hours belongs to Clock class
{
	return seconds / 3600 % 24; //the scope of seconds is the class itself
}

int Clock::get_minutes()const
{
	return seconds / 60 % 60;
}

int Clock::get_seconds()const
{
	return seconds % 60;
}

void Clock::display_time()
{// we don't have to initialize seconds here cause it was initialized when class was created
	std::cout << get_hours() << " " << get_minutes() << " " << get_seconds();
	update_time();
}

void Clock::update_time()
{
	seconds += 1;
}
