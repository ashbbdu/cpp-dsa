#include <iostream>
using namespace std;

int findMinimum (int arr[][3]) {
    int mini = INT_MAX;
    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 3 ; j++) {
            if(arr[i][j] < mini) {
                mini = arr[i][j];
            }
        }
    }
    return mini;
}

int main () {
        int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {3,4,-1}
    };
    // Find Minimum Element
    cout << findMinimum(arr) << " is the minimum element" << endl;
    
    
}