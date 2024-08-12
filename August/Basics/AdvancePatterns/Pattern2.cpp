#include <iostream>
using namespace std;

int main () {
    int n =5;
     for(int row = 0 ; row < n  ; row++) {
            for(char ch = 'A' ; ch <= 'A'+ (n - row -1) ; ch++ ) {
                cout << ch ;
            }
            cout << endl;
        }
}
