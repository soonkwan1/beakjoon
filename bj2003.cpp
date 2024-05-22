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
    int n, m; cin >> n >> m;
    int* dp = new int[n + 1];
    for (int i=0; i<n; i++) cin >> dp[i];
    dp[n] = 0;

    int start = 0, end = 0;
    ll total = 0;
    int ans = 0;
    while (end <= n){
        if (total == m){
            ans++;
            total = total - dp[start] + dp[end];
            start++; end++;
        }
        else if (total < m){
            total += dp[end];
            end++;
        }
        else if (total > m){
            total -= dp[start];
            start++;
        }
    }
    cout << ans << endl;

    delete[] dp;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}