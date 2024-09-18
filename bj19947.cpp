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
    int h, y; cin >> h >> y;
    int dp[100]; fill_n(dp, 100, 0);

    dp[0] = h; 
    dp[1] = h * 1.05; 
    dp[2] = dp[1] * 1.05;
    dp[3] = h * 1.2;
    dp[4] = max(dp[1] * 1.2, dp[3] * 1.05);
    for (int i=5; i<=y; i++){
        dp[i] = max(dp[i - 1] * 1.05, max(dp[i - 3] * 1.2, dp[i - 5] * 1.35));
    }
    cout << dp[y] << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}