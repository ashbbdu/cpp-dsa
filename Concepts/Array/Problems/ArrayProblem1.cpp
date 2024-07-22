#include <iostream>
using namespace std;

int findUnique (vector <int> arr) {
    // 0 ^ anything will be = anything eg 0 ^ 1 = 1 , 0 ^ 2 = 2
    int ans = 0;
    for(int i = 0 ; i < arr.size() ; i++) {
        ans = ans ^ arr[i];
    }
     return ans;
}

// Arrays lecture 2 questions
int main () {
    // Find unique element in an array
    // vector <int> arr {1,2,3,1,2,3,4,4,5,6,5,6,7};
    cout << "Enter the size of the array" << endl ;
    int n;
    cin >> n;
    vector <int> arr(n);
    cout << "Enter the elements in the array" << endl;
    for(int i = 0 ; i < arr.size() ; i++) {
        cin >> arr[i];
    }

    cout << endl;

    int uniquElement = findUnique(arr);
    cout << uniquElement << " is the unique element in the array ";
}