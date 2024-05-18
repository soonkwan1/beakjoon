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
        cout << "Pairs for " << n << ": ";

        vector<pair<int, int>> v;
        for (int i = 1; i <= n / 2; i++) {
            if (i == n - i) continue;
            v.push_back(make_pair(i, n - i));
        }

        if (v.size() == 0) {
            cout << endl;
            continue;
        }
        for (int i = 0; i < v.size(); i++) {
            cout << v[i].first << " " << v[i].second;
            if (i == v.size() - 1) cout << endl;
            else cout << ", ";
        }
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
