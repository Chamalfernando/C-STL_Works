#include "header.hpp"

void explainVectors()
{
    // vector<int> v; // can dynamically increases it's size.

    // v.push_back(2);    // {} -> {1}
    // v.emplace_back(2); // faster than push_back()

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});  // if use push_back() to insert a pair, you have to use {} to denote that.
    vec.emplace_back(1, 2); // but emplace_back() automatically assumes it to be paired and inserts that pair into the vector.

    vector<int> vecGivenSize(5, 100); //{100,100,100,100,100} already defined 5 instances of 100.

    vector<int> vecGarbage(5); //{0,0,0,0,0} 5 instances of 0 or any garbage value.Can increase it's size.

    // copying vectors.
    vector<int> vecFirst(5, 20);     // {} -> {20,20,20,20,20}
    vector<int> vecSecond(vecFirst); // {20,20,20,20,20} copy of the above.

    /************************** accessing vector elements **********************/

    // using iterator.
    vector<int> vect = {1, 2, 4, 22, 33, 154, 4};
    vector<int>::iterator itr = vect.begin(); // pointing to the memory address of the beginning of the vector. i.e. memory address of value 1.
    itr++;                                    // shift the memory address to the next memory location.
    cout << *(itr) << " ";                    // value of the memory would be accessed using * operator.
    itr = itr + 2;                            // shifting directly by 2 positions.
    cout << *itr << endl;

    vector<int>::iterator it = vect.end(); // end will point to the right after the last element. not pointing to an element. If you do it--, then it will switch to the last point. i.e to the value 4.
    // vector<int>::iterator it = vect.rend(); // not used very much.
    // vector<int>::iterator it = vect.rbegin(); // not used very much.

    // can access vector elements by using indexes.
    vector<int> vect1 = {20, 30, 40, 50};
    cout << vect1[2] << vect1[1];
    cout << vect1.back() << endl; // element which is 50 will be accessed.

    /************************** to iterate through a vector **********************/
    vector<int> dummyVect = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    for (vector<int>::iterator it = dummyVect.begin(); it != dummyVect.end(); it++)
    {
        cout << *it << endl;
    }

    // but since the above way is too lengthy, we normally don't use that. Instead we use auto keyword to iterate through that.

    /**
     * Note:
     * if you specify auto keyword when assigning a variable, the datatype will automatically assign according to the data.
     * Ex : int a = 5; // a will be int
     *      auto b = 5; // automatically assign the variable b integer 5.
     *      auto str = "chamal".
     *
     */

    for (auto itr = dummyVect.begin(); itr != dummyVect.end(); itr++)
    {
        cout << *it << endl;
    }

    // easiest and simplest method.
    for (auto it : dummyVect)
    {
        cout << it << endl; // this will fetch the element directly.
    }

    /************************** deletion of vector elements **********************/
    vector<int> deleteVect = {11, 22, 33, 44, 55, 66, 77, 88, 99};

    // .erase(location of the address using iterator | a location)
    deleteVect.erase(deleteVect.begin() + 1);

    for (auto it : deleteVect)
    {
        cout << it << " "; // this will fetch the element directly.
    }

    // .erase(starting location, ending location + 1). Lets say you want to delete element relevant to indexes 2,3,4 , you have to specify it like below. [start,end) - end location will not be removed.
    deleteVect.erase(deleteVect.begin() + 2, deleteVect.begin() + 5); // index 5 won't deleted.
    cout << endl;
    for (auto it : deleteVect)
    {
        cout << it << " "; // this will fetch the element directly.
    }

    /************************** insert functions **********************/

    vector<int> v(2, 100);          //{100,100}
    v.insert(v.begin(), 300);       //{300, 100, 100}
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> copyVec(2, 50);                          // {50, 50}
    v.insert(v.begin(), copyVec.begin(), copyVec.end()); // {50, 50, 300, 10, 10, 100, 100}

    // {10, 20}
    cout << v.size(); // 2

    // {10, 20}
    v.pop_back(); // {10}

    // v1 -> {10, 20}
    vector<int> v1 = {10, 20};
    // v2 -> {30, 40}
    vector<int> v2 = {30, 40};

    v1.swap(v2); // v1 -> {30, 40}, v2 -> {10, 20}

    v.clear(); // erases the entire vector.

    cout << v.empty();
}