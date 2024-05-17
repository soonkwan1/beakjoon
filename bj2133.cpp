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
    ll n; cin >> n;
    ll dp[31]; fill_n(dp, 31, 0);
    dp[2] = 3; dp[4] = 11;

    for (int i=5; i<=n; i++){
        if (i % 2 == 1) continue;

        dp[i] = 2 * dp[2] * dp[i - 2];
    }
    
    cout << dp[n] << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}