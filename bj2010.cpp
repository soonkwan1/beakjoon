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
    int tc = n;
    int ans = 0;
    while (tc--) {
        int tmp; cin >> tmp;
        ans += tmp;
    }

    cout << ans - n + 1 << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
