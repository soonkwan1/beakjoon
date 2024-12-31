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
    string a, b; cin >> a >> b;

    ll ans = 0;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            ans += (int(a[i]) - 48) * (int(b[j]) - 48);
        }
    }
    cout << ans << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
