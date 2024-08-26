#include <iostream>
#include <queue>
using namespace std;

int main () {
    // PQ stores the highest element at the top
    priority_queue <int> pq;
    pq.push(2);
    pq.push(19);
    pq.push(20);
    cout << pq.top();

    cout << endl;
    // if we want to store the minumum element on the top
    // min heap
    priority_queue <int , vector <int> , greater <int> > pq1;
    pq1.push(2);
    pq1.push(1);
    pq1.push(5);
    pq1.push(7);
    cout << pq1.top() ;
}   
