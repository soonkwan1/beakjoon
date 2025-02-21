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

void dfs(int n, unordered_map<int, bool>& um, vector<int>& v) {
    if (v.size() == n) {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (um[i]) continue;
        um[i] = true;
        v.push_back(i);
        dfs(n, um, v);
        um[i] = false;
        v.pop_back();
    }
}

void INPUT() {
    int n; cin >> n;
    unordered_map<int, bool> um;
    vector<int> v;
    dfs(n, um, v);
}

int main() {
    fastio;
    INPUT();
    return 0;
}
