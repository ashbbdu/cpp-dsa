#include <iostream>
#include <set>
using namespace std;

int main () {
    // multiset contains same  element and in ascending order
    multiset <int> ms;
    ms.insert(1); 
    ms.insert(1); 
    ms.insert(1); 
    ms.insert(1); 
    ms.insert(14);
    ms.insert(15);
    ms.insert(14);   

    cout << ms.count(14) << endl;
  
    for (auto it : ms) {
        cout << it << " ";
    }
    cout << endl;
      // deleting all the 1's
      auto it = ms.erase(1);

       
     for (auto it : ms) {
        cout << it << " ";
    }
     // deleting one  1

     auto it1 = ms.erase(ms.find(1));
       for (auto it1 : ms) {
        cout << it1 << " ";
    }
}