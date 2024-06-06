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

struct compMin {
    bool operator() (const int& a, const int& b) const {
        return a < b;
    }
};

vector<int> ans;
void dfs(int idx, int m, vector<int> v) {
    if (ans.size() == m) {
        for (int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
        cout << endl;
        return;
    }

    for (int i = idx; i < v.size(); i++) {
        ans.push_back(v[i]);
        dfs(i + 1, m, v);
        ans.pop_back();
    }
}
void INPUT() {
    int n, m; cin >> n >> m;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end(), compMin());
    dfs(0, m, v);
}

int main() {
    fastio;
    INPUT();
    return 0;
}
