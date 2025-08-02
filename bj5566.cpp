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
    int n, m; cin >> n >> m;
    vector<int> table; table.push_back(0);
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        table.push_back(tmp);
    }

    vector<int> dice;
    for (int i = 0; i < m; i++) {
        int tmp; cin >> tmp;
        dice.push_back(tmp);
    }

    int pos = 1;
    int ans = 0;
    for (int i = 0; i < m; i++) {
        ans++;
        pos += dice[i];
        pos += table[pos];

        if (pos < 1) pos = 1;
        else if (pos >= n) break;
    }
    cout << ans << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
