#include <iostream>
using namespace std;

int main () {
    // Empty container
    vector <int> arr;

    for(int i = 0 ; i < 10 ; i++) {
        // arr.push_back(i);
        // or
        arr.emplace_back(i+1);
    }
    cout << arr[10] << endl;
    for(int i = 0 ; i < arr.size() ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Iterators

    vector <int>::iterator beginItr = arr.begin() ; //returns us the pointer , the memory location
    cout << *beginItr << endl ;  // * prints the exact value of present at the location

    vector <int>::iterator endItr = arr.end() ;
    // end always points to after the last element so that is why it is printin 0 and not 10    
    cout << *endItr;
    cout << endl;
    for(vector<int>::iterator i = beginItr ; i < endItr ; i++) {
        cout << *i << " " ;
    }
}


// Notes : emplace_back and push_back are same , under the hood they are doing same

