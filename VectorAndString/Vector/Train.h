#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Time
{
public:
	void setHour(const size_t& h);
	void setMin(const size_t& m);
	void print() const;
	float returnInMin() const;

private:
	size_t hour = 0;
	size_t min = 0;
};

inline void Time::setHour(const size_t& h)
{
	if (h >= 0 && h < 24)
	{
		hour = h;
	}
	else
		cout << "Hour error" << endl;
}
inline void Time::setMin(const size_t& m)
{
	if (m >= 0 && m < 60)
	{
		min = m;
	}
	else
		cout << "Hour error" << endl;
}

inline void Time::print() const
{
	cout << hour << ":" << min << endl;
}

inline float Time::returnInMin() const
{
	return (float)min + hour / 60;
}

class Train
{
public:
	void setTime(const size_t& h=0, const size_t& m=0);
	void addInformation(const size_t& number, const string& station);
	size_t getNumber() const;
	void print() const;
	bool operator<(const Train& t);

private:
	size_t number = 0;
	Time time;
	string station = "";
};

inline void Train::setTime(const size_t& h, const size_t& m)
{
	time.setHour(h);
	time.setMin(m);
}

inline void Train::addInformation(const size_t& number, const string& station)
{
	this->number = number;
	this->station = station;
}

inline size_t Train::getNumber() const
{
	return number;
}

inline void Train::print() const
{
	cout << "Number: " << number << endl;
	cout << "Station: " << station << endl;
	cout << "Time: "; time.print();

}

inline bool Train::operator<(const Train& t)
{
	return time.returnInMin() < t.time.returnInMin();
}