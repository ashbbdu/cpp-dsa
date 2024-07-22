#include <iostream>
using namespace std;

int main () {
    // Sort 0s and 1s
    // not working dry run this in copy
    vector <int> arr = {1,1,0,1,0,1,0,1,0,0,1,1,0};
    // using two pointer approach
    int start = arr[0];
    int end = arr.size() - 1;

    while(start <= end) {
        if(arr[start] > arr[end]) {
            swap(arr[start] , arr[end]);
          
        }
        start++;
        end--;
      
    }

    for(int i = 0 ; i < arr.size() ; i++) {
        cout << arr[i] << " " ;
    }
}