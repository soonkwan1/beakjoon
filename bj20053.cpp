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
        int mx = -1000001;
        int mn = 1000001;

        for (int i = 0; i < n; i++) {
            int tmp; cin >> tmp;
            mx = max(mx, tmp);
            mn = min(mn, tmp);
        }
        cout << mn << " " << mx << endl;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
