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
    int h, w, n, m; cin >> h >> w >> n >> m;
    n++; m++;
    int ans1, ans2;
    if (h % n == 0) ans1 = h / n;
    else ans1 = h / n + 1;
    if (w % m == 0) ans2 = w / m;
    else ans2 = w / m + 1;

    cout << ans1 * ans2 << endl;

}

int main() {
    fastio;
    INPUT();
    return 0;
}
