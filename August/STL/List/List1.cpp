#include <iostream>
#include <list>
using namespace std;

int main () {
    // List is also a container , and works similar to container
    // All the functions which are available for Vector are also available for List as well
    // Additionally we have a functiion push_front in List
    // push_front and emplace_front are same
    list <int> ls = {4,5};
    ls.push_front(1);
    ls.push_front(2);
    for(auto i : ls) {
        cout << i << " ";
    }

    // Deque is simiar and has all functionalites of list and vector 
    // Note : Vector uses Array Data Structure under the hood where as List and Deque uses Linked List under the hood. 
}