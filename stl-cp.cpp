#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i, n) for(int i = 0; i < int(n); ++i)
#define vet(a) for(auto&i : a) cout << i << " "
#define out(a) cout << a << endl
#define lli long long int


void printVac(vector<int> &v) {
    cout << "the size is: " << v.size() << endl;
    cout << "elements: " << endl;
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

void printVp(vector<pair<int, string>> &vp) {
    cout << "the size is: " << vp.size() << endl;
    cout << "elements: " << endl;
    for(int i = 0; i < vp.size(); ++i) {
        cout << vp[i].first << " " << vp[i].second << endl;
    }
    cout << endl;
}

void printMp(map<int, string> &mp) {
    // for(auto it = mp.begin(); it != mp.end(); ++it) {
    //     cout << it->first << " " << it->second << endl;
    // }
    for(auto i : mp) {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;
}

void printSt(set<int> &st) {
    for(auto &i : st) {
        cout << i << " ";
    }
}

void printMst(multiset<int> &mst) {
    for(auto &i : mst) {
        cout << i << " ";
    }
}

void printPq(priority_queue<int, vector<int>, greater<int>> &pq) {
    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

void printDq(deque<int> &dq) {
    while(!dq.empty()) {
        cout << dq.front() << " ";
        dq.pop_front();
    }
    cout << endl;
}

bool cmp(pair<int, int> &a, pair<int, int> &b) {
    if(a.first != b.first) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int32_t main() {
    IOS;
    
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    */
    
    //This file is created to keep track of C++ STL and to use in fact preparation before any competitive exams
    
    vector<int> v{10, 5, 3, 11, 23, 28, 32, 40, 13, 9, 62};

    cout << "using sort() function" << endl;
    sort(v.begin(), v.end());
    vet(v);
    cout << endl;

    cout << "using reverse sort() function" << endl;
    sort(v.begin(), v.end(), greater<int>());
    vet(v);
    cout << endl;

    cout << "using reverse() function" << endl;
    reverse(v.begin(), v.end());
    vet(v);
    cout << endl;

    cout << "using max_element() function" << endl;
    cout << *max_element(v.begin(), v.end());
    cout << endl;

    cout << "using *min_element() function" << endl;
    cout << *min_element(v.begin(), v.end());
    cout << endl;

    cout << "using *accumulate() function" << endl;
    cout << accumulate(v.begin(), v.end(), 0);
    cout << endl;

    cout << "using binary_search() function" << endl;
    binary_search(v.begin(), v.end(), 1) ? cout << "Found" : cout << "not found";
    cout << endl;

    cout << "using lower_bound() function" << endl;
    cout << *lower_bound(v.begin(), v.end(), 13); // 1st element greter than or equal to the target element
    cout << endl;

    cout << "using upper_bound() function" << endl;
    cout << *upper_bound(v.begin(), v.end(), 13); // 1st element exactly greater than the target element
    cout << endl;

    cout << "using count() function" << endl;
    cout << count(v.begin(), v.end(), 1);
    cout << endl;

    cout << "using find() function" << endl;
    find(v.begin(), v.end(), 1) == v.end() ? cout << "not found": cout << *find(v.begin(), v.end(), 1);
    cout << endl;



    cout << "Here is another vector to test some manipulation" << endl;
    vector<int> V{10, 5, 3, 11, 7, 9, 7, 8, 10, 12, 5};
    sort(V.begin(), V.end());
    vet(V);
    cout << endl;

    cout << "using V.erase() function" << endl;
    V.erase(find(V.begin(), V.end(), 7));
    vet(V);
    cout << endl;

    cout << "using unique() function" << endl;
    auto it = unique(V.begin(), V.end()); // returns the iterator that point to the element that follows the last element not removed
    V.erase(it, V.end()); // The system of erasing elements in a range
    vet(V);
    cout << endl;

    cout << "using next_permutation() function" << endl;
    next_permutation(V.begin(), V.end());
    vet(V);
    cout << endl;

    cout << "using prev_permutation() function" << endl;
    prev_permutation(V.begin(), V.end());
    vet(V);
    cout << endl;

    cout << "using distance() function" << endl;
    cout << distance(V.begin(), max_element(V.begin(), V.end())); // The distance from the 1st element to the max element
    cout << endl;


    // Here comes the important properties on STL containers
    // Gonna enlish here: pair, vector, deque, queue, priority_queue, stack, set, unordered_set, multiset, map, unordered_map, multimap, 
    
    cout << "pair container properties" << endl;

    pair<int, string> p;
    //p = make_pair(2, "BD"); or like p = {10, "strvalue"}
    p = {2, "india"};
    pair<int, string> &p1 = p;
    p1.first = 3;

    cout << p.first << " " << p.second << endl;

    int a[] = {2, 4, 6};
    int b[] = {1, 3, 5};
    pair<int, int> p_array[4];
    p_array[0] = {a[0], b[0]};
    p_array[1] = {a[1], b[1]};
    p_array[2] = {a[2], b[2]};

    swap(p_array[0], p_array[2]);

    for(int i = 0; i < 3; ++i) {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

    //cin >> p_array[3].first;
    //cout << p_array[3].first;

    cout << "vector container properties" << endl;

    vector<int> vv; // we can declare any type of data like string, bool etc.
    //vv.push_back(5);

    printVac(vv);

    for(int i = 0; i < 5; ++i) {
        vv.push_back(i);
        printVac(vv);
    }
    vv.pop_back();
    printVac(vv);

    // cout << "nested vector container properties" << endl;

    // vector<pair<int, string>> vp;

    // vp.push_back({2, "BD"});

    // int n; cin >> n;

    // for(int i = 0; i < n; ++i) {
    //     int x; string s;
    //     cin >> x >> s;
    //     vp.push_back({x, s});
    // }

    // printVp(vp);

    cout << "vector array container properties" << endl;

    vector<int> va[3];
    vector<vector<int>> vvv;

    // Leaving vector part here due to time before the ICPC exam
    // I must complete leter.

    cout << "map container properties" << endl; // insertion, find, erase, clear

    map<int, string> mp;
    mp[1] = "BD";
    mp[3] = "IN";
    mp[2] = "JP";
    mp.insert({4, "CH"});
    printMp(mp);

    auto mp_elem = mp.find(3);
    cout << mp_elem->first << " " << mp_elem->second << endl;
    cout << endl;

    mp.erase(mp_elem);
    printMp(mp);
    cout << mp[2] << endl;
    
    mp.clear();

    printMp(mp);

    map<pair<int, int>, string> nmp;
    nmp.insert({{9, 5}, "IN"});
    nmp.insert({{5, 5}, "BD"});

    for(auto &i : nmp) {
        cout << i.first.first << " " << i.second << endl;
    }

    cout << endl;


    cout << "set container properties" << endl; // insertion, find, erase, clear

    set<int> st;
    st.insert(5);
    st.insert(7);
    st.insert(3);
    st.insert(5);
    printSt(st);
    cout << endl;
    st.erase(st.find(5));
    printSt(st);
    cout << endl;
    st.erase(3);
    printSt(st);
    cout << endl;
    st.clear();
    printSt(st);
    cout << endl;

    multiset<int> mst; // can be used as priority queue
    mst.insert(10);
    mst.insert(9);
    mst.insert(11);
    mst.insert(8);
    mst.insert(9);

    printMst(mst);
    cout << endl;

    cout << "stack and queue properties" << endl; // push, pop, top for stack, front for queue
    stack<int> stk;
    stk.push(5);
    stk.push(3);
    stk.push(10);
    stk.push(12);
    stk.push(9);

    while(!stk.empty()) {
        cout << stk.top() << " ";
        stk.pop();
    }
    cout << endl;

    queue<string> q;
    q.push("abc");
    q.push("def");
    q.push("ghi");
    q.push("jkl");
    q.push("mno");

    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    cout << endl;

    cout << "priority queueand deque properties properties" << endl;
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(10);
    pq.push(11);
    pq.push(100);
    pq.push(50);
    pq.push(30);
    printPq(pq); // pq.top(), pq.pop()

    cout << "deque properties" << endl; // push_back, push_front, pop_back, pop_front, front, back, empty etc...


    deque<int> dq;
    dq.push_back(10);
    dq.push_back(5);
    dq.push_back(20);
    dq.push_back(12);
    dq.push_back(9);

    printDq(dq);

    cout << "comparator integration" << endl;

    vector<pair<int, int>> vcmp;
    vcmp.push_back({2, 5});
    vcmp.push_back({3, 7});
    vcmp.push_back({3, 9});
    vcmp.push_back({4, 8});

    sort(vcmp.begin(), vcmp.end(), cmp);

    for(auto &i : vcmp) {
        cout << i.first << " " << i.second << endl;
    }

    cout << endl;

    return 0;
}