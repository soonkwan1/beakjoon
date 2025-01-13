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
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        bool* v = new bool[n + 1];
        fill_n(v, n + 1, true);

        for (int i = 2; i <= n; i++) {
            for (int j = i; j <= n; j += i) {
                if (v[j]) v[j] = false;
                else v[j] = true;
            }
        }

        int ans = 0;
        for (int i = 1; i <= n; i++) {
            ans += v[i];
        }
        cout << ans << endl;
        delete v;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
