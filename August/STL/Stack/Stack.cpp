#include <iostream>
#include<stack>
using namespace std;

int main () {
    // LIFO
    stack <int> st;
    st.push(1);
    st.push(2);
    cout << st.top() << endl;
    st.pop();

    cout << st.top() << endl;
    cout << st.size() ;
    cout << endl;
    // Printing all the elements
    stack <int> st1;
    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.push(4);
    st1.push(5);
    st1.push(6);

    while(st1.empty() == false) {
        cout << st1.top() << " ";
        st1.pop();
    }

    // cout << st1.empty() << endl;

}