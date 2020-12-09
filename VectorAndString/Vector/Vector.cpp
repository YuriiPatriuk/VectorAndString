#include <iostream>
#include <vector>
#include <ctime>
#include <string>
#include <algorithm>
using namespace std;

template <typename T>
void printVector(const vector<T>& v, const string & text = "")
{
    cout << text << endl;
    for (const auto& elem : v)
    {
        cout << elem << "\t";
    }
    cout << endl;
}

int main()
{
    srand(time(NULL));
    //vector<int> v(3,-1);// -1 -1 -1
    //vector<double> v = { 100,200,300 };
    //v.reserve(15);//change capasity
    ////v.shrink_to_fit();
    //int amount = 10;
    //for (size_t i = 0; i < amount; i++)
    //{
    //    v.push_back(i);
    //    cout <<"Capasity: "<< v.capacity() << "\tSize: " << v.size() << endl;;
    //}

    //printVector(v, "Vector");
    //v.resize(10);
    //cout << "After resize: " << endl;
    //printVector(v, "Vector");

    //cout << "After resize (12,7): " << endl;
    //v.resize(12,7);
    //printVector(v, "Vector");

    ///*v.clear();
    //cout << "After clear: " << endl;
    //printVector(v, "Vector");*/
    //*v.begin() = 111;
    //*(v.end() - 1) = 999;
    //cout << "After change first and last: " << endl;
    //printVector(v, "Vector");

    //v.front() = 222;
    //v.back() = 222;
    //printVector(v, "Vector");

    //int value = 500 + rand() % 501;
    //v.insert(v.begin() + 2, value);
    //printVector(v, "Vector");
    //v.insert(v.begin(), { -1, -2, -3 });
    //printVector(v, "Vector");

    //v.erase(v.begin()+1);
    //printVector(v, "Vector");
    //v.erase(v.begin(), v.begin()+3);
    //printVector(v, "Vector");

    //sort(v.begin(),v.end());
    //printVector(v, "Vector");
    //
    //sort(v.rbegin(),v.rend());
    //printVector(v, "Vector");
    int count=0;
    vector<string> words{"a","bt","zc","k","h","bretert"};
    /*cout << "Enter count of words: ";
    cin >> count;
    for (size_t i = 0; i < count; i++)
    {
        string word;
        cout << "Enter " << i+1 << " word" << endl;
        cin >> word;
        words.push_back(word);
    }*/
    printVector(words, "Vector:");
    sort(words.begin(), words.end());

    printVector(words, "After sort:");
    sort(words.rbegin(), words.rend());

    printVector(words, "After sort by desc:");

    words.erase(words.begin());
    words.erase(words.end()-1);
    printVector(words, "After del first and last:");
    
    words.insert(words.begin()+words.size() / 2, {"first","second","third"});
    printVector(words, "After insert:");

    sort(words.begin(), words.end()-words.size() / 2);
    printVector(words, "After sort first half:");
    sort(words.begin() + words.size() / 2, words.end());
    printVector(words, "After sort second half:");

    string foundWord;
    cout << "What to find: ";
    cin >> foundWord;
    auto res=find(words.begin(), words.end(),foundWord);
    if (res != words.end()) //res - вказівник на значення 
    {
       cout << "True" << endl;
       cout << "Pos: " << res - words.begin() << endl;
    }
    else
        cout << "False" << endl;

}
