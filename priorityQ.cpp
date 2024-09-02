#include "header.hpp"

void explainPriorityQ()
{
    // Largest value stays at the top.
    // This is not a linear data structure. A tree data structure has been maintained.

    priority_queue<int> pq; // MAX HEAP

    pq.push(5);     // {5}
    pq.push(2);     // {5, 2}
    pq.push(8);     // {8, 5, 2}
    pq.emplace(10); // {10, 8, 5, 2}

    cout << "MAX HEAP" << endl;
    cout << pq.top() << endl; // 10

    pq.pop();                 // {8, 5, 2}
    cout << pq.top() << endl; // 8

    // size, swap, empty functions are same as others.

    priority_queue<int, vector<int>, greater<int>> pqm; // MIN HEAP
    pqm.push(5);                                        // {5}
    pqm.push(2);                                        // {2, 5}
    pqm.push(8);                                        // {2, 5, 8}
    pqm.emplace(10);                                    // {2, 5, 8, 10}

    cout << "MIN HEAP" << endl;
    cout << pqm.top() << endl; // 2
}