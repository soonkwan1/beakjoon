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

int n;
int** dp;
void dfs(int cur, int hist, int k){
    // cout << cur << " " << hist << endl;
    if (k == n){
        if (hist == (1 << 10) - 1){
            // cout << "hit" << endl;
            dp[cur][hist] = (dp[cur][hist] + 1) % MOD;
        }
        return;
    }

    int up_node = cur + 1;
    int dn_node = cur - 1;
    if (dn_node >= 0){
        dfs(dn_node, hist | (1 << dn_node), k + 1);
    }
    if (up_node < 10){
        dfs(up_node, hist | (1 << up_node), k + 1);
    }
}
void setMem(){
    dp = new int*[10];
    for (int i=0; i<10; i++){
        dp[i] = new int[(1 << 10)];
        fill_n(dp[i], 1 << 11, 0);
    }
}
void freeMem(){
    for (int i=0; i<10; i++) delete[] dp[i];
    delete dp;
}
void INPUT(){
    cin >> n;
    setMem();
    for (int i=1; i<=9; i++){
        dfs(i, (1 << i), 1);
    }

    ll answer = 0;
    for (int i=0; i<10; i++){
        answer += dp[i][(1 << 10) - 1];
    }
    cout << answer << endl;
    freeMem();
}

int main(){
    fastio;
    INPUT();
    return 0;
}