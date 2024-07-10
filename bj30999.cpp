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
    int n, m; cin >> n >> m;
    int ans = 0;
    while (n--) {
        string line; cin >> line;
        int ocnt = 0, xcnt = 0;
        for (int i = 0; i < m; i++) {
            if (line[i] == 'O') ocnt++;
            else xcnt++;
        }
        if (ocnt > xcnt) ans++;
    }
    cout << ans << endl;
}

void SOLUTION() {

}

int main() {
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}
