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
#define MOD 1000000000

int n, k;
int** dp;
void getDP(){
    dp = new int*[k+1];
    for (int i=0; i<=k; i++){
        dp[i] = new int[n+1];
        fill_n(dp[i], n+1, 0);
    }
    for (int i=0; i<=n; i++){
        dp[1][i] = 1;
    }
    for (int i=1; i<=k; i++){
        dp[i][0] = 1;
    }
}
void freeDP(){
    for (int i=0; i<=k; i++) delete[] dp[i];
    delete[] dp;
}
void SOLUTION(){
    for (int i=2; i<=k; i++){
        for (int j=1; j<=n; j++){
            dp[i][j] = (dp[i-1][j] % MOD + dp[i][j-1] % MOD) % MOD;
        }
    }
    cout << dp[k][n] << endl;
}
void INPUT(){
    cin >> n >> k;
    getDP();
    SOLUTION();
    freeDP();
}
int main(){
    fastio;
    INPUT();
    return 0;
}