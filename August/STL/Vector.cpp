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
    cout << endl;
    //  another way using auto
    for(auto i = beginItr ; i < endItr ; i++) {
        cout << *i << " ";
    }
    cout << endl;
    for(auto i : arr) {
    cout << i << " ";
    }
    cout << endl;
    // Reverse Iterator
    auto revStart = arr.rbegin();
    auto revEnd = arr.rend();
    cout << *revEnd << " " <<*revStart; 
    cout << endl;
    for(auto i = revStart ; i < revEnd ; i++) {
        cout << *i << " ";
    }
    cout << endl;
    // -------------------- Front and Back ------------------
    // Returns first and last element in the vector
    cout << arr.front() << " ";
    cout << arr.back() << endl;

        // -------------------- Erase ------------------

    vector <int> brr = {1,2,3,4,5};
    //brr.erase(brr.begin() + 1);  // removes a particular element
    brr.erase(brr.begin() + 2 , brr.end() ); //expected o/p 1,2
    
    for(auto i : brr) {
        cout << i << " ";
    }

    cout << endl;
    // -------------------- Clear ------------------
    
   
    brr.clear();
    for(auto i : brr) {
        cout << i << " i";
    }

     cout << endl;
    // -------------------- Insert ------------------
    // for inserting the element
    vector <int> crr = {2,3,4,6};
    // Before which position I want to insert
    crr.insert(crr.begin() , 4)  ;//will insert in the start ie before crr.begin()
    crr.insert(crr.begin() + 1 , 0); //will insert before crr.begin() + 1
    crr.insert(crr.end() , 10);

    for(auto i : crr) {
        cout << i << " ";
    }

    }


// Notes : emplace_back and push_back are same , under the hood they are doing same

