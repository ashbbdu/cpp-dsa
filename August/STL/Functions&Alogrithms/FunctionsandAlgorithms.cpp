#include <iostream>
#include <numeric>
// #include <vector>
using namespace std;

void explainSort () {
    int arr[6] = {1,2,3,5,4,3};
    sort(arr , arr+6);

    for(auto it : arr) {
        cout << it << " ";
    }
    cout << endl;
    vector <int> brr = {1,2,3,5,4,3};

    sort(brr.begin() , brr.end());
    for(auto it : brr) {
        cout << it << " ";
    }
    // for(int i = 0 ; i < 5 ; i++) {
    //     cout << arr[i] << " ";
    // }
}

void accumulate () {
    // similar to reduce in Javascript
    // dont know why req sqiglies are showing up but code is working fine
    int arr[6] = {1,2,3,5,4,3};
    cout << accumulate(arr , arr+6 ,0);
    cout << endl;
    vector <int> brr = {1,2,3,5,4,3};
    cout << accumulate(brr.begin() , brr.end() , 0);
}

void count () {
    int arr [6] = {1,1,2,3,3,1};
    int num = 2;
    cout << count(arr , arr+6 , num); //num is what to find in the array
}

void find () {
    int arr [6] = {1,1,2,1,3,1};
    auto it = find(arr , arr+6 , 3);
    cout << *it << endl;
}

void next_permutation () {
    string str = "ashish";
    int totalPer = 0;
    do {
        totalPer = totalPer + 1;
        cout << str << endl;
        

    } while(next_permutation(str.begin() , str.end()));
    
    cout << totalPer << "totalPer" << endl;
}

void maxElement () {
    cout << endl;
    int arr [6] = {1,0,-2,8,3,1};
    auto it = max_element(arr , arr+6);
    auto it1 = min_element(arr , arr+6);
    cout << *it << " is the max element" << endl;
    cout << *it1 << " is the min element" << endl;
}

bool interalCompartor (int a, int b) {
    if(a < b) return true;
    return false;
}

void reverseArr () {
    cout << endl;
    int arr [5] =  {1,2,3,4,5};
    reverse(arr , arr+5);
    for(auto it : arr) {
        cout << it << " ";
    }
}

void explainInteralCompartor () {
    cout << "Sorting..." << endl;
    int arr [6] = {1,0,-2,8,3,1};
    sort(arr , arr+6 , interalCompartor);

    for(auto it : arr) {
        cout << it << " ";
    }
}

int main () {
    explainSort();
    cout << "Accumulate" << endl;
    accumulate();
    cout << endl;
    cout << "Count " << endl;
    count();
     cout << endl;
    cout << "Find " << endl;
    find();
    cout << endl;
    cout << endl;
    cout << "next_permutation or prev_permutation " << endl;
    next_permutation();
    maxElement();
    reverseArr();
    cout << endl;
    explainInteralCompartor();
}