#include <iostream>
using namespace std;


void explainPair () {
    // comes under std => std::pair

    // pair <int , int> pr1 = {2,3};
    // or
    pair <int , int> pr1 = make_pair(2,3);
    cout << pr1.first << " " << pr1.second ;
    cout << endl;
     pair <int , string> pr2 = make_pair(2, "Hello");
    cout << pr2.first << " " << pr2.second ;

    cout << endl;
    pair <pair <int , int> , string> pr3 = {{4,5} , "Hello"};
    cout << pr3.first.first << " " << pr3.first.second << " " << pr3.second << endl;

}


int main () {
    // cout << pow(3,3); 

    // Pair
    explainPair();
}