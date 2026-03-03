#include <bits/stdc++.h>
using namespace std;

void dequeRevision() {

    deque<int> dq = {1,2,3};

    // Add
    dq.push_back(4);
    dq.push_front(0);
    dq.emplace_back(5);
    dq.emplace_front(-1);

    // Insert
    dq.insert(dq.begin()+2, 100);

    // Access
    cout << dq.front() << " ";
    cout << dq.back() << " ";
    cout << dq[2] << endl;

    // Delete
    dq.pop_back();
    dq.pop_front();
    dq.erase(dq.begin()+1);

    // Size
    cout << "Size: " << dq.size() << endl;

    // Print
    for(int x : dq)
        cout << x << " ";
}
void stackRevision() {

    stack<int> st;

    // Push
    st.push(10);
    st.push(20);
    st.emplace(30);

    // Top
    cout << "Top: " << st.top() << endl;

    // Pop
    st.pop();

    // Size
    cout << "Size: " << st.size() << endl;

    // Empty
    cout << "Empty?: " << st.empty() << endl;

    // Printing stack (copy required)
    stack<int> temp = st;
    while(!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
}
void queueRevision() {

    queue<int> q;

    // Insert
    q.push(10);
    q.push(20);
    q.emplace(30);

    // Access
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    // Size
    cout << "Size: " << q.size() << endl;

    // Delete
    q.pop();

    cout << "Front after pop: " << q.front() << endl;

    // Empty check
    cout << "Empty?: " << q.empty() << endl;

    // Printing queue (copy required)
    queue<int> temp = q;
    while(!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }

    // Clear queue manually
    while(!q.empty()) {
        q.pop();
    }

    cout << "\nSize after clear: " << q.size() << endl;
}
void setRevision() {


    set<int> st;

    // Insert
    st.insert(10);
    st.insert(20);
    st.insert(10);  // duplicate ignored
    st.emplace(30);

    // Print (always sorted)
    for(int x : st)
        cout << x << " ";
    cout << endl;

    // Find
    auto it = st.find(20);
    if(it != st.end())
        cout << "Found 20\n";

    // Count (0 or 1)
    cout << "Count of 10: " << st.count(10) << endl;

    // Erase by value
    st.erase(10);

    // Erase by iterator
    it = st.begin();
    st.erase(it);

    // Lower bound / Upper bound
    cout << "Lower bound of 20: " << *st.lower_bound(20) << endl;
    cout << "Upper bound of 20: " << *st.upper_bound(20) << endl;

    // Size
    cout << "Size: " << st.size() << endl;

    // Clear
    st.clear();
}
void multisetRevision() {

    multiset<int> ms;

    // Insert
    ms.insert(10);
    ms.insert(10);
    ms.insert(20);
    ms.emplace(20);

    // Print (sorted + duplicates allowed)
    for(int x : ms)
        cout << x << " ";
    cout << endl;

    // Count (can be >1)
    cout << "Count of 10: " << ms.count(10) << endl;

    // Erase ONE occurrence
    ms.erase(ms.find(10));

    // Erase ALL occurrences
    ms.erase(20);

    cout << "Size: " << ms.size() << endl;
}
void unorderedSetRevision() {

    unordered_set<int> us;

    // Insert
    us.insert(10);
    us.insert(20);
    us.insert(10);  // duplicate ignored

    // Print (not sorted)
    for(int x : us)
        cout << x << " ";
    cout << endl;

    // Find
    if(us.find(20) != us.end())
        cout << "Found 20\n";

    // Erase
    us.erase(10);

    cout << "Size: " << us.size() << endl;

    // Clear
    us.clear();
}
void mapRevision() {

    map<int, string> mp;

    // Insert
    mp[1] = "One";
    mp.insert({2, "Two"});
    mp.emplace(3, "Three");

    // Duplicate key (updates value)
    mp[1] = "Updated One";

    // Print (always sorted by key)
    for(auto it : mp)
        cout << it.first << " -> " << it.second << endl;

    // Access
    cout << "Value at key 2: " << mp[2] << endl;

    // Find
    if(mp.find(3) != mp.end())
        cout << "Found key 3\n";

    // Count (0 or 1)
    cout << "Count of key 1: " << mp.count(1) << endl;

    // Erase by key
    mp.erase(2);

    // Erase by iterator
    auto it = mp.begin();
    mp.erase(it);

    // Lower bound / Upper bound
    cout << "Lower bound of 3: " << mp.lower_bound(3)->first << endl;

    // Size
    cout << "Size: " << mp.size() << endl;

    // Clear
    mp.clear();
}
void multimapRevision() {

    multimap<int, string> mm;

    // Insert (duplicate keys allowed)
    mm.insert({1, "One"});
    mm.insert({1, "Another One"});
    mm.emplace(2, "Two");

    // Print (sorted by key)
    for(auto it : mm)
        cout << it.first << " -> " << it.second << endl;

    // Count (can be >1)
    cout << "Count of key 1: " << mm.count(1) << endl;

    // Erase all occurrences of key
    mm.erase(1);

    cout << "Size: " << mm.size() << endl;
}
void unorderedMapRevision() {

    unordered_map<int, string> ump;

    // Insert
    ump[1] = "One";
    ump.insert({2, "Two"});
    ump.emplace(3, "Three");

    // Print (not sorted)
    for(auto it : ump)
        cout << it.first << " -> " << it.second << endl;

    // Find
    if(ump.find(2) != ump.end())
        cout << "Found key 2\n";

    // Erase
    ump.erase(1);

    cout << "Size: " << ump.size() << endl;

    // Clear
    ump.clear();
}
void sortingRevision() {

    vector<int> v = {5,1,4,2,8};

    // 1. Normal Ascending
    sort(v.begin(), v.end());

    // 2. Descending
    sort(v.begin(), v.end(), greater<int>());

    // 3. Custom Comparator
    sort(v.begin(), v.end(), [](int a, int b){
        return a > b;   // descending
    });

    // 4. Sort Partial
    sort(v.begin()+1, v.begin()+4);

    // 5. Stable Sort
    stable_sort(v.begin(), v.end());

    // 6. Reverse
    reverse(v.begin(), v.end());

    // 7. Count occurrences
    cout << count(v.begin(), v.end(), 4) << endl;

    // 8. Find element
    auto it = find(v.begin(), v.end(), 8);

    // 9. Binary Search (array must be sorted)
    bool exists = binary_search(v.begin(), v.end(), 4);

    // 10. Lower Bound / Upper Bound
    cout << *lower_bound(v.begin(), v.end(), 4) << endl;
    cout << *upper_bound(v.begin(), v.end(), 4) << endl;

    // 11. Min / Max
    cout << *min_element(v.begin(), v.end()) << endl;
    cout << *max_element(v.begin(), v.end()) << endl;
}

int main() {
sortingRevision();
unorderedMapRevision();
multimapRevision();
mapRevision(); 
unorderedSetRevision();
multisetRevision();
setRevision();
dequeRevision();
queueRevision();
stackRevision();
    return 0;
}