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
    int n, k; cin >> n >> k;

    int total = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i < k) total += v[i];
    }

    int ans = total;
    for (int i = 0; i < n - k; i++) {
        total = total - v[i] + v[i + k];
        ans = max(ans, total);
    }
    cout << ans << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
