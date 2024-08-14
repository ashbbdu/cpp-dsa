
#include <iostream>
using namespace std;
   
//    Brute force approach
//    int secondLargestElement(vector<int>& nums) {
//         //your code goes here
        // sort(nums.begin(), nums.end());
        // int largest = nums[nums.size() - 1];
        // int secondLargest = -1;
        // for(int i = nums.size() - 2 ; i >= 0 ; i--) {
        //     if(nums[i] != largest) {
        //         secondLargest = nums[i];
        //         break;
        //     }
        
        // }
        // return secondLargest;
//     }


// Optimal approach
int secondLargestElement(vector<int>& nums) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for(int i = 0 ;i < nums.size() ; i++) {
        if(nums[i] > largest) {
            secondLargest = largest;
            largest = nums[i];
         } else  if (nums[i] > secondLargest && nums[i] != largest) {
            secondLargest = nums[i];
         }
    }
    return secondLargest;
}

int main () {
    vector <int> arr = {7,9,9,8,6,7,6,5};
    cout << secondLargestElement(arr);
}
