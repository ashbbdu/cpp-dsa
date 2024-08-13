#include <iostream>
using namespace std;


    int countDigit (int n) {
        int count = 0;
        while(n > 0) {
            n = n /10;
            count = count +1;
        }
        return count;
    }
    bool isArmstrong(int n) {
        int copy = n;
        int total = 0;
        int totalDigitCount = countDigit(n);

        while(n > 0) {
            int lastDigit  = n % 10;
            total = total + pow(lastDigit , totalDigitCount) ;
            n = n/10;
        }
        if(copy == total) {
            return true;
        } else {
            return false;
        }
    }

int main () {
 cout << isArmstrong(15) << endl;
}