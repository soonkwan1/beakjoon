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
        ll a, b, c; cin >> a >> b >> c;
        ll ans = min(pow(a + b, 2) + pow(c, 2), min(pow(a + c, 2) + b * b, pow(b + c, 2) + a * a));
        cout << ans << endl;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
