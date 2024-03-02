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

int n;
vector<pair<int, int>> v;
struct compMin {
    bool operator() (const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first != b.first) return a.first < b.first;
        return a.second < b.second;
    }
};
void INPUT() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int s, e; cin >> s >> e;
        v.push_back(make_pair(s, e));
    }
    sort(v.begin(), v.end(), compMin());
}
void SOLUTION() {
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < v.size(); i++) {
        if (pq.empty()) pq.push(v[i].second);
        else {
            if (pq.top() <= v[i].first) {
                pq.pop();
                pq.push(v[i].second);
            }
            else pq.push(v[i].second);
            
        }
    }    
    cout << pq.size() << endl;
}

int main() {
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}
