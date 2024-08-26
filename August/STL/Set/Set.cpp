#include <iostream>
#include <set>
using namespace std;

int main () {
    // stores only unique elements in ascending order
    set <int> st;
    st.insert(4);
    st.insert(5);
    st.insert(1);
    st.insert(3);
    st.insert(2);
    st.insert(3);
  
    // Note : When I am printing the set it is printing in ascending order and unique element
    for(auto it : st) {
        cout << it << " ";
    }
    cout << endl;
    auto it = st.find(5);
    if(it != st.end()) {
        cout << *it << endl;
    } else {
        cout << "Not present";
    }
    cout << endl;
    // Another way
    set <int>::iterator it1 = st.find(1);
    if(it1 != st.end()) {
        cout << *it1 << endl;
    } else {
        cout << "Not present";
    }
}
