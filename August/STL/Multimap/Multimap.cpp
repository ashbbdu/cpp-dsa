#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int, string> mp;
    mp.insert({1, "jkl"});
    mp.insert({2, "asfd"});
    mp.insert({3, "asd"});
    mp.insert({1, "er"});
    mp.insert({2, "hht"});
    mp.insert({1, "sdf"});
    mp.insert({4, "bbng"});


    for(auto it : mp) {
        cout << it.first << " => " << it.second << endl;
    }
}