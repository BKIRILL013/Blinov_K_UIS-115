#include "Time.h"

int Time(const int hour, const int minutes)
{
	return hour * 3600 + minutes * 60;
}
int Time2(const int hour, const int minutes)
{
	if (hour >= 0 && minutes >= 0)
	{
		Time(hour, minutes);
	}
	else
	{
		throw 1;
	}
}
int Time3(const int hour, const int minutes)
{
	if (hour >= 0 && minutes >= 0)
	{
		Time(hour, minutes);
	}
	else
	{
		throw invalid_argument{ "Bad parameters standard exception" };
	}
}
int Time4(const int hour, const int minutes)
{
	if (hour >= 0 && minutes >= 0)
	{
		Time(hour, minutes);
	}
	else
	{
		throw empty_class();
	}
}
int Time5(const int hour, const int minutes)
{
	if (hour >= 0 && minutes >= 0)
	{
		Time(hour, minutes);
	}
	else
	{
		throw independent_class("Bad parameters independent class with function parameter fields");
	}
}
int Time6(const int hour, const int minutes)
{
	if (hour >= 0 && minutes >= 0)
	{
		Time(hour, minutes);
	}
	else
	{
		throw successor_class("Bad parameters successor class");
	}
}