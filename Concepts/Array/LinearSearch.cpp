#include <iostream>
using namespace std;

int find(int arr[], int key)
{
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
  return 0;
}

int main()
{
    // int arr[] = {2, 9, 6, 7, 4, 12, 15};
    // cout << "Enter a value to search" << endl;
    // int key;
    // cin >> key;
    // if(find(arr, key) != 0) {
    //     cout << "Element is present at index " << find(arr, key) << endl;
    // } else {
    //     cout << "Element is not present" << endl;
    // }


    // Find total ones and zeros in an array
    int arr [] = {0,1,0,1,0,0,1,1,1,0,0,1,1,1,1};
    int size = 15;
    int zeros = 0;
    int ones = 0;
    for(int i = 0 ; i < 15 ;i++) {
        if(arr[i] == 1) {
            ones++;
        } else if (arr[i] == 0) {
            zeros++;
        }
    }   
    cout << zeros << " " << ones << endl;

    cout << "Find minimum number in an array" << endl;
    int brr[] = {5,7,4,6,1,2,-1,-2};
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0; i < 8; i=i+1) {
        if(min > brr[i]) {
            min = brr[i];
        }
    }

    for(int i = 0 ; i < 8 ; i=i+1) {
        if(max < brr[i]) {
            max = brr[i];
        }
    }
    
    cout << "Maximum number is " << max << endl;
    cout << "Minimum number is " <<  min << endl;

    // Find extream in an array
    int crr[8] = {10,20,30,40,50,60,70,80};
    int sizeArr = 8;
    int start = 0;
    int end = sizeArr - 1;
    while(start <= end) {  //jb tak end bada ya barabar ho start k
        // if(start > end) {
        //     break;
        // }
        if(start == end) {
            cout << crr[start] << " ";
        } else {
            cout << crr[start] << " ";
            cout << crr[end]  << " ";
        }
      
        start++;
        end--;
    }
    cout << endl;
    // Reverse an array

    int drr[7] = {1,2,3,4,5,6,7};
    int drrSize = 7;
    int drrStart = 0;
    int drrEnd = drrSize - 1;

    while(drrStart <= drrEnd) {
        // try swapping using temp variable
        swap(drr[drrStart] , drr[drrEnd]);
        drrStart++;
        drrEnd--;
    }

    for(int i = 0 ; i < drrSize ; i++) {
        cout << drr[i] << " ";
    }


}