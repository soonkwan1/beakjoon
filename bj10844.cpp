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

int n;
ll** dp;
void INPUT(){
    cin >> n;
    dp = new ll*[10];
    for (int i=0; i<10; i++){
        dp[i] = new ll[n+1];
        fill_n(dp[i], n+1, 0);
    }
    for (int i=1; i<10; i++){
        dp[i][1] = 1;
        // if (i==9) dp[i][2] = 1;
        // else dp[i][2] = 2;
    }
}
void SOLUTION(){
    int MOD = 1000000000;
    for (int i=2; i<=n; i++){
        for (int j=0; j<10; j++){
            // if (j + 1 < 10) dp[j + 1][i + 1] = (dp[j + 1][i + 1] % MOD + dp[i][j] % MOD) % MOD;
            // if (j - 1 >= 0) dp[j - 1][i + 1] = (dp[j - 1][i + 1] % MOD + dp[i][j] % MOD) % MOD;
            if (j - 1 >= 0) dp[j][i] = (dp[j][i] % MOD + dp[j-1][i-1] % MOD) % MOD;
            if (j + 1 < 10) dp[j][i] = (dp[j][i] % MOD + dp[j+1][i-1] % MOD) % MOD;
        }
    }
    ll ans = 0;
    for (int i=0; i<10; i++){
        ans = (ans % MOD + dp[i][n] % MOD) % MOD;
    }
    cout << ans << endl;
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}