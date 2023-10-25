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
    int n; cin >> n;
    ll* road = new ll[n - 1]; for (int i = 0; i < n - 1; i++) cin >> road[i];
    int* city = new int[n]; for (int i = 0; i < n; i++) cin >> city[i];

    int pos = 0; int idx = 1;
    ll ans = 0;
    while (idx < n) {
        ans += city[pos] * road[idx - 1];
        if (city[pos] < city[idx]) idx++;
        else {
            pos = idx;
            idx = pos + 1;
        }
    }

    cout << ans << endl;

    delete[] road; delete[] city;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
