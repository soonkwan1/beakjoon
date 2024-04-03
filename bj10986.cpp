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
    ll* num_list = new ll[n];
    ll* dp = new ll[n + 1]; dp[0] = 0;
    ll* ans = new ll[m];

    for (int i=0; i<n; i++){
        cin >> num_list[i];
        dp[i+1] = dp[i] + num_list[i];
        ans[dp[i+1] % m]++;
    }

    // for (int i=0; i<m; i++){
    //     cout << ans[i] << " ";
    // }
    // cout << endl;

    ll ret = ans[0];
    for (int i=0; i<m; i++){
        if (ans[i] == 0 || ans[i] == 1) continue; 
        ret += (ans[i] * (ans[i] - 1)) / 2;
    }
    cout << ret << endl;

    delete[] ans;
    delete[] dp;
    delete[] num_list;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}

/*

*/