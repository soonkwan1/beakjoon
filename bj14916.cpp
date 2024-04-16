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
#include <unordered_set>
#define endl "\n"
#define ll long long
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

void INPUT(){
    int n; cin >> n;
    int* dp = new int[n+1];
    fill_n(dp, n+1, int(1e9));

    dp[2] = 1; dp[5] = 1; dp[4] = 2;
    for (int i=6; i<=n; i++){
        int m1 = int(1e9), m2 = int(1e9);
        m1 = dp[i - 2] != int(1e9) ? dp[i - 2] + 1 : int(1e9);
        m2 = dp[i - 5] != int(1e9) ? dp[i - 5] + 1 : int(1e9);
        dp[i] = min(m1, m2);
    }

    if (dp[n] == int(1e9)) cout << -1 << endl;
    else cout << dp[n] << endl;

    delete[] dp;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    // SOLUTION();
    return 0;
}