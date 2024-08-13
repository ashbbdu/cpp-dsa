 
 
 #include <iostream>
 #include <vector>
using namespace std;

int main () {
    vector<int> arr = {7, 5, 9, 2,  -1 ,-3, 8};

for (int i = 0 ; i < arr.size() - 1; i++) {
        int minIndex = i;
        for(int j = i + 1 ; j < arr.size() ; j++) {
            if(arr[minIndex] > arr[j]) {
                minIndex = j;
            }
           
        }
         swap(arr[minIndex] , arr[i]);
    }  

        for(int i = 0 ;  i < arr.size() ; i++) {
            cout << arr[i] << " ";
        }
}
 
