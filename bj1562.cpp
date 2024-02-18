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
int*** dp;

void setMem(){
    dp = new int**[10];
    for (int i=0; i<10; i++){
        dp[i] = new int*[101];
        for (int j=0;j <101; j++){
            dp[i][j] = new int[1 << 10];
            fill_n(dp[i][j], 1 << 10, 0);
        }
    }
}
void freeMem(){
    for (int i=0; i<10; i++){
        for (int j=0; j<101; j++){
            delete[] dp[i][j];
        }
        delete[] dp[i];
    }
    delete[] dp;
}
void SOLUTION(){
    for (int i=1; i<=9; i++){
        dp[i][1][1 << i]++;
    }

    for (int i=2; i<=100; i++){
        for (int j=0; j<10; j++){
            for (int k=0; k<1<<10; k++){
                
            }
            // d[j][i]
        }
    }
}
void INPUT(){
    cin >> n;
    setMem();

    freeMem();
}

int main(){
    fastio;
    INPUT();
    return 0;
}


/*
// void dfs(int cur, int hist, int k){
//     // cout << cur << " " << hist << endl;
//     if (k == n){
//         if (hist == (1 << 10) - 1){
//             // cout << "hit" << endl;
//             dp[cur][hist] = (dp[cur][hist] + 1) % MOD;
//         }
//         return;
//     }

//     int up_node = cur + 1;
//     int dn_node = cur - 1;
//     if (dn_node >= 0){
//         dfs(dn_node, hist | (1 << dn_node), k + 1);
//     }
//     if (up_node < 10){
//         dfs(up_node, hist | (1 << up_node), k + 1);
//     }
// }
*/