#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "clock.h"


TEST_CASE("test get hours from seconds")
{
	Clock clock; //will create an instance of the class Clock
	REQUIRE(clock.get_hours(3600) == 1);
	REQUIRE(clock.get_hours(34950) == 9);
	REQUIRE(clock.get_hours(68950) == 19);
}

TEST_CASE("get minutes from seconds")
{
	Clock clock;
	REQUIRE(clock.get_minutes(3600) == 0);
	REQUIRE(clock.get_minutes(3800) == 3);
	REQUIRE(clock.get_minutes(34950) == 42);
}

TEST_CASE("get seconds from seconds")
{
	Clock clock;
	REQUIRE(clock.get_seconds(3600) == 0);
	REQUIRE(clock.get_seconds(3800) == 20);
	REQUIRE(clock.get_seconds(34950) == 30);
}