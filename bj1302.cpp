#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <unordered_set>
#include <unordered_map>
#define ll long long
#define INF 98765432101
#define endl "\n"
using namespace std;
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);

typedef struct Node {
    string name;
    int n;
}Node;

typedef struct compMin {
    bool operator() (const Node& a, const Node& b) const {
        if (a.n != b.n) return a.n > b.n;
        else return a.name < b.name;
    }
};

void INPUT() {
    int n; cin >> n;
    vector<string> v;
    unordered_map<string, int> um;

    for (int i = 0; i < n; i++) {
        string name; cin >> name;
        if (!um[name]) v.push_back(name);
        um[name]++;
    }
    
    vector<Node> vn;
    for (int i = 0; i < v.size(); i++) {
        Node tmp; tmp.name = v[i]; tmp.n = um[v[i]];
        vn.push_back(tmp);
    }
    sort(vn.begin(), vn.end(), compMin());
    
    cout << vn[0].name << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
