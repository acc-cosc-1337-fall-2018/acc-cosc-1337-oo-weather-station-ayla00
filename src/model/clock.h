//code that prevents duplicating stuff below
#ifndef CLOCK_H //does clock_h exist? if no, below is defined
#define CLOCK_H



class Clock
{
public:
	int get_hours(long long seconds); //long long allows  you to have huge numbers
	int get_minutes(long long seconds);
	int get_seconds(long long seconds);
	void display_time();
};

#endif //CLOCK_H