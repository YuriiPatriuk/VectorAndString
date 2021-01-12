#pragma once
#include "Train.h"
class Railway
{
public:
	void addTrain(const Train& train);
	void addTrain(const size_t& number, const string& station, const size_t& hour, const size_t& min);
	void deleteTrain(const size_t& n);
	void print() const;
	void printTrain(const size_t& n) const;
	void input();

private:
	vector<Train> trains;
};

inline void Railway::addTrain(const Train& train)
{
	trains.push_back(train);
}

inline void Railway::addTrain(const size_t& number, const string& station, const size_t& hour, const size_t& min)
{
	Train t;
	t.setTime(hour, min);
	t.addInformation(number, station);
	this->addTrain(t);
}

inline void Railway::deleteTrain(const size_t& n)
{
	int count = 0;
	for (auto& i : trains)
	{
		if (i.getNumber() == n) {
			trains.erase(trains.begin()+count, trains.begin()+count+1);
		}
		++count;
	}

}

inline void Railway::print() const
{
	int count = 0;
	if (trains.size() == 0)
	{
		cout << "No trains!" << endl;
		return;
	}
	for (auto& i : trains)
	{
		cout << "Train " << ++count << endl;
		i.print();
		cout << "-----------------------" << endl;
	}
}

inline void Railway::printTrain(const size_t& n) const
{
	bool check = false;
	for (auto& i : trains)
	{
		if (i.getNumber() == n) {
			i.print();
			cout << "----------------------\n";
		}
	}
	if (!check)
		cout << "Train not found" << endl;
}

inline void Railway::input()
{
	size_t n,h,m;
	string s;
	cout << "Enter number of train: " << endl;
	cin >> n;
	cout << "Enter name of station: " << endl;
	cin >> s;
	cout << "Enter time of arrive" << endl;
	cout << "Enter hour: ";
	cin >> h;
	cout << "Enter minutes: ";
	cin >> m;
	addTrain(n,s,h,m);
}


