#include <iostream>
using namespace std;
// intersection of two arrays
int main () {
    // vector <int> arr = {1,2,4,5,3,6,7,3};
    // vector <int> brr = {2,3,4,3,3,3};
    vector <int> arr = {1,2,2,3,5};
    vector <int> brr = {2,2,3,4};
    vector <int> finalArr;
    for(int i = 0 ; i < arr.size() ; i++) {
        for(int j = 0 ; j < brr.size() ; j++) {
            if(arr[i] == brr[j]) {
                 // in case of duplicate mark that particular number with some random number so it does not match again
                // brr[j] = -1; //because upar wale se match chal rha hai
                // arr[i] = -1;  do this using pen copy
                finalArr.push_back(arr[i]);
                // arr[i] = -1;
                break; // best way here to use break;
            }
       }
    }
    cout << "Printing the array" << endl;
     for(int j = 0 ; j < finalArr.size() ; j++) {
           cout << finalArr[j] << " " ;
       }
}
