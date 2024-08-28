#include <iostream>
using namespace std;

int main () {
    string s = "raj";
    cout << s << endl;
    s =  s + 'j';
    cout << s << " " << s[0] << endl;

    char arr[] = {'a' , 'b' , 'c'};
    cout << arr[0] << endl;
    
    for(int i = 0 ;  i < 4 ; i++) {
        cout << s[i] << " ";
    }
    cout << endl;
    for (auto it : s) {
        cout << it << " ";
    }

    cout << endl;
        string a = "abc";
        string b = "abdc";
        cout << (a == b) << " check"  << " length " << a.length() << endl;


    // Substr
    string str = "striver";
    cout << str.substr(1 , 3) << endl; // where to start and how many character you want

    // Characters  
    // Range A-Z (65-90) and a-z (97-122)

}
