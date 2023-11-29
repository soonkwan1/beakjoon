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

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT() {
    ll n; cin >> n;
    int ans = n % 8;
    if (ans == 0) ans = 2;
    else if (ans == 7) ans = 3;
    else if (ans == 6) ans = 4;

    cout << ans << endl;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
