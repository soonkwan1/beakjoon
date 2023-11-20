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
using namespace std;

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
struct Node {
    int cost;
    int value;
};
struct compMax {
    bool operator() (const Node& a, const Node& b) const {
        if (a.cost == b.cost) return a.value < b.value;
        return a.cost < b.cost;
    }
};
void printDP(int** d, int c, int n) {
    for (int i = 0; i <= c; i++) {
        for (int j = 0; j <= n; j++) {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
}
void INPUT() {
    int c, n; cin >> c >> n;
    vector<Node> city; city.push_back({ 0, 0 });
    for (int i = 0; i < n; i++) {
        int cost, value; cin >> cost >> value;
        city.push_back({ cost, value });
    }
    sort(city.begin(), city.end(), compMax());
    
    int** dp = new int* [100001];
    for (int i = 0; i <= 100000; i++) {
        dp[i] = new int[n + 1];
        fill_n(dp[i], n + 1, 0);
    }

    int ans = 0;
    int flag = 0;
    for (int i = 1; i <= 100000; i++) {
        for (int j = 1; j <= n; j++) {
            if (i < city[j].cost) dp[i][j] = dp[i][j - 1];
            else dp[i][j] = max(dp[i - city[j].cost][j] + city[j].value, dp[i][j - 1]);

            if (dp[i][j] >= c) {
                ans = i;
                flag = 1;
                break;
            }
        }
        if (flag) break;
    }

    // printDP(dp, c, n);

    /*for (int i = 0; i < city.size(); i++) {
        cout << city[i].cost << " " << city[i].value << endl;
    }*/

    cout << ans << endl;

    for (int i = 0; i <= 100000; i++) delete[] dp[i];
    delete[] dp;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
