#include "header.hpp"
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Pairs - part of utility library.
void explainPairs()
{
    pair<int, int> p = {1, 2};

    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>> pair1 = {1, {3, 4}};

    cout << pair1.first << " " << pair1.second.second << " " << pair1.second.first;

    pair<int, int> arr[] = {{1, 2},
                            {2, 5},
                            {5, 1}};

    cout << arr[1].second;
}