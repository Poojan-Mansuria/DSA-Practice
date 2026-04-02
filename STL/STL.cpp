#include <bits/stdc++.h>
using namespace std;

void pairRevision() {

    // 1️.Normal Pair
    pair<int, int> p1 = {1, 2};
    cout << "Normal Pair: " << p1.first << " " << p1.second << endl;


    // 2.Pair of Different Data Types
    pair<int, string> p2 = {10, "Poojan"};
    cout << "Different Type Pair: " << p2.first << " " << p2.second << endl;


    // 3️ Nested Pair
    pair<int, pair<int, int>> p3 = {5, {6, 7}};
    cout << "Nested Pair: " 
         << p3.first << " "
         << p3.second.first << " "
         << p3.second.second << endl;


    // 4️ Array of Pairs
    pair<int, int> arr[] = {{1,2}, {3,4}, {5,6}};
    cout << "Array of Pairs (arr[1]): "
         << arr[1].first << " "
         << arr[1].second << endl;


    // 5️ Pair Comparison (Lexicographical)
    pair<int,int> a = {1,3};
    pair<int,int> b = {1,5};

    cout << "Comparison (a < b): " << (a < b) << endl;
}
void vectorRevision() {

    // 1️ Normal Vector
    vector<int> v1 = {1, 2, 3};
    cout << "Normal Vector: ";
    for(int i : v1) cout << i << " ";
    cout << endl;


    // 2️ Vector with Different Data Type
    vector<string> v2 = {"Poojan", "DSA"};
    cout << "String Vector: ";
    for(string s : v2) cout << s << " ";
    cout << endl;


    // 3️ Vector of Pairs
    vector<pair<int,int>> v3 = {{1,2}, {3,4}};
    cout << "Vector of Pairs: ";
    for(auto p : v3)
        cout << p.first << "," << p.second << " ";
    cout << endl;


    // 4️ 2D Vector
    vector<vector<int>> v4 = {{1,2}, {3,4}};
    cout << "2D Vector: ";
    for(auto row : v4)
        for(int val : row)
            cout << val << " ";
    cout << endl;


    // 5️ Push & Pop
    vector<int> v5;
    v5.push_back(10);
    v5.push_back(20);
    v5.pop_back();
    cout << "After Push/Pop: ";
    for(int i : v5) cout << i << " ";
    cout << endl;


    // 6️ Size & Access
    cout << "Size of v1: " << v1.size() << endl;
    cout << "First element: " << v1[0] << endl;


    // 7️ Sorting
    vector<int> v6 = {5,2,8,1};
    sort(v6.begin(), v6.end());
    cout << "Sorted Vector: ";
    for(int i : v6) cout << i << " ";
    cout << endl;
}

void listFullRevision() {

    //  Initialization Ways
    list<int> l1;                         // empty
    list<int> l2(5, 10);                  // 5 elements of 10
    list<int> l3 = {1,2,3,4};             // initializer list
    list<int> l4(l3);                     // copy constructor

    //  Push Operations
    l1.push_back(5);
    l1.push_back(15);
    l1.push_front(1);

    //  Emplace
    l1.emplace_back(100);
    l1.emplace_front(0);

    //  Access Front & Back
    cout << "Front: " << l1.front() << endl;
    cout << "Back: " << l1.back() << endl;

    //  Insert using iterator
    auto it = l1.begin();
    advance(it, 2);              // move iterator forward 2 steps
    l1.insert(it, 50);           // insert at that position

    //  Erase using iterator
    it = l1.begin();
    advance(it, 1);
    l1.erase(it);                // erase element at that position

    //  Pop Operations
    l1.pop_back();
    l1.pop_front();

    //  Remove specific value
    l1.remove(15);               // removes all 15s

    //  Assign
    l1.assign(3, 20);            // now 3 elements of 20

    //  Size & Empty
    cout << "Size: " << l1.size() << endl;
    cout << "Empty?: " << l1.empty() << endl;

    //  Resize
    l1.resize(5, 7);             // expand with 7

    //  Sort
    l3.sort();

    //  Reverse
    l3.reverse();

    //  Unique (remove consecutive duplicates)
    l3.push_back(4);
    l3.push_back(4);
    l3.unique();

    //  Merge (lists must be sorted)
    list<int> l5 = {2,5,8};
    list<int> l6 = {1,3,7};
    l5.sort();
    l6.sort();
    l5.merge(l6);

    //  Swap
    l1.swap(l3);

    // Clear
    l4.clear();

    //  Iterator Printing
    cout << "Iterator print: ";
    for(auto it = l1.begin(); it != l1.end(); it++)
        cout << *it << " ";
    cout << endl;

    //  Range Based Loop
    cout << "Range loop print: ";
    for(int x : l1)
        cout << x << " ";
    cout << endl;
}




int main() {
     listFullRevision();
     vectorRevision();
    pairRevision();
    return 0;
}
