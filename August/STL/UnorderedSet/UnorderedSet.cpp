#include <iostream>
#include <unordered_set>
using namespace std;

int main () {
    // stores unique elements but without any proper order  and has better time complexity
    unordered_set <int> us;
    us.insert(12);
    us.insert(1);
    us.insert(12);
    us.insert(1);
    us.insert(13);
    us.insert(1);

    for(auto it : us) {
        cout << it << " ";
    }
}