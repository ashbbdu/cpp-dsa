#include <iostream>
using namespace std;

int main () {
    // vector is a dynamic array

    // declaring a vector
    vector <int> arr = {1,2,3,4};
    vector <int> crr (10,-1);
    for (size_t i = 0; i < crr.size() ; i++)  {
        cout << crr[i] << " ";
    }
    
}