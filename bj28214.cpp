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
    int p; cin >> p;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int j = 0; j < k; j++) {
            int tmp; cin >> tmp;
            total += tmp;
        }
        if (total > k - p) ans++;
    }
    cout << ans << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
