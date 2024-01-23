#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#define endl "\n"
#define ll long long
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

void INPUT() {
    int n; cin >> n;
    ll ans = 0;
    for (int i = n; i >= 0; i--) {
        for (int j = i; j >= 0; j--) {
            ans += i + j;
        }
    }
    cout << ans << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
