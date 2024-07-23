#include <iostream>
using namespace std;

int main () {
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {3,7,-1}
    };
    int transposedArr[3][3];
    for(int row = 0 ; row < 3 ; row++) {
        // cout << "running" << endl;
        for(int col = 0 ; col < 3 ; col++) {
            // swap(arr[row][col] , arr[col][row]);
            // cout << arr[row][col] << " " << arr[col][row] ;
            transposedArr[row][col] = arr[col][row];
        }
    }
    for(int row = 0 ; row < 3 ; row++) {
        for(int col = 0 ; col < 3 ; col++) {
           cout << transposedArr[row][col] << " ";
        }
        cout << endl;
    }

}