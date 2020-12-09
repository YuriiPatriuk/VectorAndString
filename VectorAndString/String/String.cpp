// String.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "StringWorker.h" 
using namespace std;
using MyPtr = int*;

int main()
{
    MyPtr ptr;
    string str = "Hello";
    string dots(10, '*');
    cout << dots << endl;

    dots.front() = 'A';
    dots.back() = 'Z';
    cout << dots << endl;

    str.insert(0, "new ");
    cout << str << endl;
    str.erase(1, 4);
    cout << str << endl;
    str.replace(0, 3, "OLDEST");
    cout << str << endl;

    cout << "Substr(0,3): " << str.substr(0, 3) << endl;
    auto pos = str.find("OLD");//size_t
    if (pos != string::npos)
        cout << "Pos: " << pos << endl;

    string vowels = "oeiyuae";
    pos = str.find_first_of(vowels);
    while (pos != string::npos) {
        cout << "Pos of first small vowels: " << pos << "[" << str[pos] << "]" << endl;
        pos = str.find_first_not_of(vowels, pos + 1);
    }
    int value = 12345;
    string strValue = to_string(value);
    cout << "Str with value: " << strValue << endl;
    strValue = "a123asd";
    try {
        value = stoi(strValue);
        cout << "Value: " << value << endl;
    }
    catch (...) {
        cout << "ERROR: string for convert to int!" << endl;
    }

    string str1 = "qwee111qwe";
    StringWorker::deleteFragment(str1, "qwe");
    cout << str1 << endl;
    StringWorker::changeOldToNew(str1,"qwe", "xxz");
    cout << str1 << endl;
    StringWorker::deleteBadElements(str1,"x");
    cout << str1 << endl;


}

