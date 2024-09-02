#include "header.hpp"

void explainDeque()
{
    // exactly similar to lists and vectors.
    deque<int> dq;
    dq.push_back(2); // {2}

    dq.emplace_back(90); // {2, 90}
    dq.push_front(4);    // {4, 2, 90}
    dq.emplace_front(3); // {3, 4, 2, 90}

    dq.pop_back();  // {3, 4, 2}
    dq.pop_front(); // {4, 2}

    dq.back();
    dq.front();

    cout << dq.front() << endl; // 4
    cout << dq.back() << endl;  // 2

    // begin, end, rbegin, rend, clear, insert, size, swap as same as vector.
}