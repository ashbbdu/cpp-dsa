#include <iostream>
using namespace std;

int main () {
    // Pair sum and Triplet Sum
    vector <int> arr = {10,20,30,40,60,70};
    int target = 50;
    for(int i = 0 ; i < arr.size() ; i++) {
        int elem = arr[i];
       for(int j = i + 1 ; j < arr.size() ; j++) {
         if(elem + arr[j] == target) {
            cout << elem <<  " " << arr[j] << endl;
        } 
       }
    }

    // Triplet sum we can do using three nested loops
}