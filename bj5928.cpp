#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#define ll long long
#define INF 98765432101
#define endl "\n"
using namespace std;

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
ll getMin(int d, int h, int m) {
    return d * 24 * 60 + h * 60 + m;
}
void INPUT() {
    int d, h, m; cin >> d >> h >> m;
    ll ans = getMin(d, h, m) - getMin(11, 11, 11);
    if (ans < 0) cout << -1 << endl;
    else cout << ans << endl;
    
}

int main() {
    INIT();
    INPUT();
    return 0;
}

// 1, 2, 3, 4, 5, ...
// y-1, y+1 로 도착
