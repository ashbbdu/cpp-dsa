#include <iostream>
using namespace std;

int main () {
    int n = 4;
    for(int row = 0 ; row < n ; row++) {
            char myChar = 'A' + row;
            for (int col =0 ; col <= row; col++ ) { //here col <= row because we are not doing cout << myChar+1 it will also work but is is printing the characters in Numbers
                 cout << myChar;
            }
            cout << endl;
        }
}
