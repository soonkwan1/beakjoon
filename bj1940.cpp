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

void INPUT() {
    int n; cin >> n;
    int m; cin >> m;
    vector<int> v(n);
    unordered_map<int, bool> um;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        um[v[i]] = true;
    }

    int ans = 0;
    for (int i = 0; i < v.size(); i++) {
        if (!um[v[i]]) continue;

        if (um[m - v[i]] && (m - v[i] != v[i])) {
            ans++;
            um[m - v[i]] = false;
        }
    }
    cout << ans << endl;

}

int main() {
    fastio;
    INPUT();
    return 0;
}
