#include <iostream>
using namespace std;


int findElement (int arr[][3] , int key) {
    int brr[2];
       for(int i = 0 ; i < 3; i++) {
         int sum = 0;
        for(int j = 0; j < 3 ; j++) {
          if(arr[i][j] == key) {
            return 1;
          }
        }
    }
    return -1;
}

int main () {
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {3,4,1}
    };
   
    for(int i = 0 ; i < 3; i++) {
         int sum = 0;
        for(int j = 0; j < 3 ; j++) {
            sum = sum + arr[i][j];
        }
        cout << sum << " " ;
    }
   cout << endl;
    // Linear search in a 2D array
    int key = 10;
    int findElem = findElement(arr , key);
    cout << findElem << " value" << endl;
}