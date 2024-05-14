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
vector<int> v;
void INPUT(){
    cin >> n;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
}
void SOLUTION(){
    int** dp = new int*[2];
    for (int i=0; i<2; i++){
        dp[i] = new int[n];
        fill_n(dp[i], n, 0);
    }

    dp[0][0] = v[0];

    int ans = v[0];
    for (int i=1; i<n; i++){
        dp[0][i] = max(dp[0][i-1] + v[i], v[i]);
        dp[1][i] = max(dp[1][i-1] + v[i], dp[0][i-1]);
        ans = max(ans, max(dp[0][i], dp[1][i]));
    }
    
    cout << ans << endl;

    for (int i=0; i<2; i++) delete[] dp[i];
    delete[] dp;
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}