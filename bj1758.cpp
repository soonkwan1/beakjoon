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

struct compMax {
    bool operator() (const int& a, const int& b) const {
        return a > b;
    }
};
void INPUT() {
    int n; cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end(), compMax());
    
    ll ans = 0;
    int start = 1;
    for (int i = 0; i < v.size(); i++) {
        int tmp = v[i] - start + 1;
        if (tmp < 0) continue;
        ans += v[i] - start + 1;
        start++;
    }
    cout << ans << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
