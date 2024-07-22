#include <iostream>
using namespace std;
 #include <wchar.h>

int main () {
    // vector is a dynamic array

    // declaring a vector
    vector <int> arr = {1,2,3,4};
    arr.push_back(5);
    vector <int> crr (10,-1);
    cout << "arr ka data" << endl;
    cout << "Size of arr is " << arr.size() << endl;
    cout << "Capacity of arr is " << arr.capacity() << endl;
    for (int i = 0; i < crr.size() ; i++)  {
        cout << crr[i] << " ";
    }
    cout << endl;
    cout << "Enter the size of array" << endl;
    int n;
    cin >> n;
    vector <int> brr(n);
    cout << brr.size() << endl;
    brr.push_back(5);
    brr.push_back(10);
    // brr.pop_back();
    cout << arr.empty() << " is empty" << endl;
    cout << brr.size() << endl;
    cout << brr[3] << endl;

     for (int i = 0; i < brr.size() ; i++)  {
        cout << brr[i] << " ";
    }
    cout << endl;
    cout << brr.capacity() << endl; //should be double of size()


    vector <int> drr;
    cout << drr.empty() << endl;
}