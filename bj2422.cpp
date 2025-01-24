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

int ans = 0;
bool** table;
bool checkComb(vector<int> v) {
    if (table[v[0]][v[1]] || table[v[0]][v[2]] || table[v[1]][v[2]]) return false;
    return true;
}
void dfs(vector<int> v, int idx, int n, int m) {
    if (v.size() == 3) {
        if (checkComb(v)) ans++;
        return;
    }

    for (int i = idx; i <= n; i++) {
        v.push_back(i);
        dfs(v, i + 1, n, m);
        v.pop_back();
    }
}

void INPUT() {
    int n, m; cin >> n >> m;
    table = new bool* [n + 1];
    for (int i = 0; i < n + 1; i++) {
        table[i] = new bool[n + 1];
        fill_n(table[i], n + 1, false);
    }

    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        table[a][b] = true;
        table[b][a] = true;
    }

    vector<int> v;
    dfs(v, 1, n, m);
    cout << ans << endl;

    for (int i = 0; i < n + 1; i++) delete[] table[i];
    delete[] table;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
