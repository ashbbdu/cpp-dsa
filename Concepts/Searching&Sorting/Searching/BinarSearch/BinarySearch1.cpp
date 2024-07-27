#include <iostream>
using namespace std;


int binarySearch (int arr [] , int target , int size) {
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while(start <= end) {
        if(target == arr[mid]) {
            return mid;
        } else if (target < arr[mid]) {
            end = mid - 1;
        } else if (target > arr[mid]) {
            start = mid + 1;
        }
         mid = (start + end) / 2;
    }
   return -1; //this means elemet not found
}

int main () {
    int arr [] = {1,2,3,4,5,6,7,8,9};
    int target = 1;
    int size = 9;
    int findElement = binarySearch(arr , target , size);
    cout << "Element is present at index " << findElement << endl;
}