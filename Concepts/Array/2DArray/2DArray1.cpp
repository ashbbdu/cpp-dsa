#include <iostream>
using namespace std;

int main () {
    // Initializing the 2D Array
    int arr[3][3];
    int brr[3][3] = {
        {1,2,3} , 
        {4,5,6} , 
        {7,8,9}};

    // printing row wise 
    for(int i =0 ; i < 3 ;i++) {
        for(int j = 0 ; j < 3 ; j++) {
            cout << brr[i][j] << " ";
        } 
        cout << endl;
    }
}