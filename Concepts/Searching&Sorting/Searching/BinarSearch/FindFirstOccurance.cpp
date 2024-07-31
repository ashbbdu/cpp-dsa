#include <iostream>
using namespace std;

int firstOccurance (int arr[] , int size , int target) {
    int ans = -1;
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while(start <= end) {
        if(arr[mid] == target) {
            ans = mid;
            end = mid - 1;
        } else if (target > arr[mid]) {
             start = mid + 1;
        } else if (target < arr[mid]) {
            end = mid - 1;
        } 
         mid = (start + end) / 2;
    }
    return ans;
}

int main () {

int arr [] = {0,1,2,3,4,4,4,4,5,6,7};
int size = 10;
int target = 4;
int find = firstOccurance(arr , size , target);
cout << find << " Element found !!" << endl;
}
