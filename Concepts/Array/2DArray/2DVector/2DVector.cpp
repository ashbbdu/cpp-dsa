#include <iostream>
using namespace std;

int main () {
    vector <vector <int> > arr;
    // space vector <int> > is mandatory
    vector <int> a = {1,2,3};
    vector <int> b = {4,5,6};
    vector <int> c = {7,8};


    // if one array has unevent number of columns so how to iterate please check the loop below

    vector <vector <int> > brr;
    vector <int> d = {1,2,3};
    vector <int> e = {4,5,6,10,11,12};
    vector <int> f = {7,8,9};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    brr.push_back(d);
    brr.push_back(e);
    brr.push_back(f);

    // printing the array
    for(int i = 0 ; i < arr.size() ; i++) {
        for(int j = 0 ; j < arr[0].size() ; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Printing the uneven array with uneven number of columns" << endl;
    // printing the array
    for(int i = 0 ; i < brr.size() ; i++) {
        // arr[i].size means find the size of each column and print accordingly
        for(int j = 0 ; j < brr[i].size() ; j++) {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }


    // another way of defining vector of vector
    cout << endl;
    vector <vector <int> > crr(3 , vector <int> (3 , 10));  // understand this 
        for(int i = 0 ; i < crr.size() ; i++) {
        // arr[i].size means find the size of each column and print accordingly
        for(int j = 0 ; j < crr[i].size() ; j++) {
            cout << crr[i][j] << " ";
        }
        cout << endl;
    }
}