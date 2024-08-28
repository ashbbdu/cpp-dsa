#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int, string> mp;
    mp.insert({1, "jkl"});
    mp.insert({2, "asfd"});
    mp.insert({3, "asd"});
    mp.insert({2, "er"});
    mp.insert({2, "hht"});
    mp.insert({2, "sdf"});
    mp.insert({4, "bbng"});


    for(auto it : mp) {
        cout << it.first << " => " << it.second << endl;
    }
    cout << endl;
    auto it = mp.equal_range(2);
    for(auto  i = it.first ; i != it.second ; i++) {
        cout << (*i).first << " => " << (*i).second << endl;
    }
    // Output of above code
    // 2 => asfd
    // 2 => er
    // 2 => hht
    // 2 => sdf
}