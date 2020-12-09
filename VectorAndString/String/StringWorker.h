#pragma once
#include <iostream>
#include<string>

using namespace std;

class StringWorker
{
public:
	/*StringWorker(const string s);
	StringWorker();
	void print() const;*/
	static void deleteFragment(string& str, const string fragment);
	static void changeOldToNew(string& str, const string old, const string _new);
	static void deleteBadElements(string& str, const string delStr);
};

