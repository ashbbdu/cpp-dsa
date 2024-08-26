#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Stores accoding to ascending order and does not store mulitple data for one entry
    map<int, string> mp;
    mp[2] = "def";
     mp[2] = "sdaf";  // this will be printed
    mp.insert({4, "jkl"});
    mp[1] = "abc";
    mp[3] = "ghi";

    auto it = mp.find(1);
    cout << (*it).first << " => " << (*it).second << endl;

    cout << endl;

    for (auto it : mp)
    {
        cout << it.first << " => " << it.second << endl;
    }

    // Unordered Map
    // When we want fast search functionlaity we use unordred map
    // Similar to Unordredset Unorderdmap also does not store into ordred way
}