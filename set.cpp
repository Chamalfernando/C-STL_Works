#include "header.hpp"

void explainSet()
{
    // stores everything in a sorted order and only stores unique elements no duplicates in a set.

    set<int> st;
    st.insert(1);  // {1}
    st.emplace(2); // {1, 2}
    st.insert(2);  // {1, 2}
    st.insert(4);  // {1, 2, 4}
    st.insert(3);  // {1, 2, 3, 4}
    st.insert(5);  // {1, 2, 3, 4, 5}

    // functionality of inset like in vector.
    // begin() , end(), rbegin(), rend(), size(), empty() and swap() are same as those of above.

    // {1,2,3,4,5}
    auto itr1 = st.find(3); // returns an iterator which points to the 3, points to the address of it.

    // {1,2,3,4,5}
    auto itr2 = st.find(6); // if the element is not in the set it will return st.end() which is the address after last element.

    st.erase(5); // {1, 2, 3, 4} logarithmic time. it deletes 5 and maintain the sorted order.

    int cnt = st.count(1);
    // 0/1
    // if it exist it will have only 1 occurence

    // giving the element to be erased.
    // st.erase(1);

    // giving the iterator to be erased.
    auto itrr = st.find(3);
    st.erase(itrr);
    // constant time for deletion using iterator.

    // {1,2,4}
    auto it1 = st.find(2);
    auto it2 = st.find(4);

    st.erase(it1, it2); // after erase {1, 4} [first,last)

    // lower_bound() and upper_bound() function works in the same key
    // as in vector it does.
    // This is the syntax.

        auto itrate1 = st.lower_bound(2);
    auto iterate2 = st.upper_bound(3);

    // 40.00 mins onwds.
}