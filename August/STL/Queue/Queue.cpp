#include <iostream>
#include <queue>
using namespace std;

int main () {
    // FIFO , example a ticket counter
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    while (q.empty() == false) {
        cout << q.front() << " ";
        q.pop();
    }
    // Other functions are similar to Vector , stacks , list
}