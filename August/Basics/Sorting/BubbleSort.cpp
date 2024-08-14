 
 
 #include <iostream>
 #include <vector>
using namespace std;

int main () {
    // vector<int> arr = {7, 5, 9, 2,  -1 ,-3, 8}; 
    vector <int> arr = {2,1,3,-1,4,9,8,6};
    cout << arr.size() << endl;
    for(int i = 0 ; i < arr.size() -1 ; i++) {
        for(int j = i + 1 ; j < arr.size() - i - 1  ; j++) {
            if(arr[i] > arr[j]) {
                swap(arr[i] , arr[j]);
            }
        }
    }

    for(int i = 0 ;  i < arr.size() ; i++) {
            cout << arr[i] << " ";
        }
 
    }  

      
