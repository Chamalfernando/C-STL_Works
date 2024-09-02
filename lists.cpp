#include "header.hpp"

void explainLists()
{
    list<int> ls; // dynamic in nature. List gives you front operations which won't be given in vector.

    // internal operation inside a list is a doubly linked-list.
    // for a vector it is a singly linked-list.

    ls.push_back(3); // {3}

    ls.emplace_back(5); // {3,5}

    ls.push_front(90); // {90, 3, 5}

    ls.emplace_front(3);

    // rest functions are same as vectors.
    // begin, end, rbegin, rend, clear, insert, size, swap
}