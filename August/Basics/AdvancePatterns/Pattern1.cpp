#include <iostream>
using namespace std;

// for n= 5
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

int main () {
    int n = 5;
     int num = 1;
        for(int row = 0 ; row < n ; row++) {
            for(int col =0 ; col < row +1 ; col++) {

                cout << num << " "; 
                num = num+1;
            }
             cout << endl;
        }
}