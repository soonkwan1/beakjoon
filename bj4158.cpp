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
    while (true) {
        int n, m; cin >> n >> m;
        if (!n && !m) break;
        unordered_map<int, bool> um;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            int tmp; cin >> tmp;
            um[tmp] = true;
        }
        for (int i = 0; i < m; i++) {
            int tmp; cin >> tmp;
            if (um[tmp]) ans++;
        }
        cout << ans << endl;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
