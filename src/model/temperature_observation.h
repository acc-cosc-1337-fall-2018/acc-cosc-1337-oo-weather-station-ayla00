
#ifndef TEMPERATURE_OBSERVATION_H
#define TEMPERATURE_OBSERVATION_H

class TemperatureObservation
{
public:
	TemperatureObservation( int t, long long s): temperature(t), seconds(s){} //constructor
	int get_temperature() const;

private:
	int temperature;
	long long seconds;

};

#endif //TEMPERATURE_OBSERVATION_H