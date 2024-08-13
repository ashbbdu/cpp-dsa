#include <iostream>
using namespace std;

void printFn () {
    cout << "Ashish" <<  endl;
    printFn();
}

int main () {
    printFn();
}