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
    dp = new int**[101];
    for (int i=0; i<101; i++){
        dp[i] = new int*[10];
        for (int j=0;j <10; j++){
            dp[i][j] = new int[1 << 10];
            fill_n(dp[i][j], 1 << 10, 0);
        }
    }
}
void freeMem(){
    for (int i=0; i<101; i++){
        for (int j=0; j<10; j++){
            delete[] dp[i][j];
        }
        delete[] dp[i];
    }
    delete[] dp;
}
void SOLUTION(){
    for (int i=1; i<=9; i++){
        dp[1][i][1 << i]++;
    }

    // length
    for (int i=1; i<100; i++){
        // end number
        for (int j=0; j<10; j++){
            // bit
            for (int k=0; k< (1<<10); k++){
                if (j - 1 >= 0){
                    dp[i + 1][j - 1][k | (1 << (j - 1))] = (dp[i + 1][j - 1][k | (1 << (j - 1))] % MOD + dp[i][j][k] % MOD) % MOD;
                }
                if (j + 1 <= 9){
                    dp[i + 1][j + 1][k | (1 << (j + 1))] = (dp[i + 1][j + 1][k | (1 << (j + 1))] % MOD + dp[i][j][k] % MOD) % MOD;
                }
            }
        }
    }
    ll ans = 0;
    for (int j=0; j<10; j++){
        ans += dp[n][j][(1 << 10) - 1];
    }
    cout << ans % MOD << endl;
}
void INPUT(){
    cin >> n;
    setMem();
    SOLUTION();
    freeMem();
}

int main(){
    fastio;
    INPUT();
    return 0;
}