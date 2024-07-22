#include <iostream>
using namespace std;

int main () {
    // Union of two arrays , means put all the elements of two arrays into one array

    // more cases/variations we can work like if there are duplicates remove those , and array should be sorted etc
    vector <int> arr1 = {1,2,3,4};
    vector <int> arr2 = {5,6,7,8};
    vector <int> finalArr;
    for(int i = 0 ; i < arr1.size() ; i++) {
        finalArr.push_back(arr1[i]);
    }

      for(int i = 0 ; i < arr2.size() ; i++) {
        finalArr.push_back(arr2[i]);
    }

    // Printing the array
      for(int i = 0 ; i < finalArr.size() ; i++) {
            cout << finalArr[i] << " ";
        }

}