#include <iostream>

using namespace std;

int main () {
  int arr[7]; // array of size 7
  cout << arr  << endl;  // represents the first address in memory where array is stored
  cout << &arr  << endl;

  int drr[53];
  char brr[106];
  bool crr[23];

  int myArr[] = {1,2,3,4,5};
  int myBrr[12] = {1,2,3,4,5,6};
  for(int i = 0; i < 12 ; i= i+1) {
    cout << myBrr[i] << endl;
  } 

// Taking input in any array
cout<<"enter the array items" << endl;
int myDrr[5];
for(int i = 0 ; i < 5 ; i = i+1) {
    // int n;
    // cin >> n;
    // myDrr[i] = n;
    cin >> arr[i];
}

  for(int i = 0; i < 5 ; i= i+1) {
    cout << myDrr[i] << " ";
  } 

}