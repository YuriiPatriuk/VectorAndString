#include <string>
#include <iostream>
#include "StringWorker.h"
using namespace std;
// Визначити class для роботи з рядками(string) з статичними методами
// - видалення з рядка всіх входжень заданого слова(фрагменту) +
// - заміна старого фрагменту на новий фрагмент(всі входження) +
// - вилучення усіх небажаних знаків із рядка

//StringWorker::StringWorker(const string s)
//{
//	str = s;
//}
//
//StringWorker::StringWorker()
//	:StringWorker("DEFAULT")
//{}
//
//void StringWorker::print() const
//{
//	cout << "Your string: " << str << endl;
//}

void StringWorker::deleteFragment(string& str, const string fragment)
{
    auto pos = str.find(fragment);
    while (pos!=string::npos)
    {
        str.erase(pos, size(fragment));
        pos = str.find(fragment,pos);
    }
}

void StringWorker::changeOldToNew(string& str, const string old, const string _new)
{
    auto pos = str.find(old);
    while (pos != string::npos)
    {
        str.replace(pos, size(old),_new);
        pos = str.find(old, pos);
    }
}

void StringWorker::deleteBadElements(string& str, const string delStr)
{
    auto pos = str.find_first_of(delStr);
    while (pos != string::npos) {
        str.erase(pos, 1);
        pos = str.find_first_of(delStr, pos);
    }
}


