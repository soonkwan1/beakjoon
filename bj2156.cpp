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
int* grape;
int* dp;
void INPUT(){
    cin >> n;
    grape = new int[n];
    for (int i=0; i<n; i++){
        cin >> grape[i];
    }
    dp = new int[n]; fill_n(dp, n, 0);
}
void freeMem(){
    delete[] grape;
    delete[] dp;
}
void SOLUTION(){
    int ans = 0;
    if (n == 1) cout << grape[0] << endl;
    else if (n == 2) cout << grape[0] + grape[1] << endl;
    else if (n == 3) {
        ans = max(grape[0] + grape[1], max(grape[0] + grape[2], grape[1] + grape[2]));
        cout << ans << endl;
    }
    else{
        dp[0] = grape[0];
        dp[1] = grape[0] + grape[1];
        dp[2] = max(grape[0] + grape[1], max(grape[0] + grape[2], grape[1] + grape[2]));
        dp[3] = max(grape[0] + grape[2] + grape[3], max(grape[0] + grape[1] + grape[3], 
            grape[1] + grape[2]));
        for (int i=4; i<n; i++){
            dp[i] = max(dp[i-3] + grape[i-1] + grape[i], 
                max(dp[i-1], dp[i-2] + grape[i]));
        }
        cout << max(dp[n-2], dp[n-1]) << endl;
    }

    freeMem();
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}