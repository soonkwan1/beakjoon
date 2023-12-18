#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
int** setMem(int n){
    int** tmp = new int*[n+1];
    for (int i=0; i<=n; i++){
        tmp[i] = new int[n+1];
    }

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            int t; cin >> t;
            t = t == 0 ? int(1e9) : t;
            tmp[i][j] = t;
        }
    }
    return tmp;
}
void freeMem(int** t, int n){
    for (int i=0; i<=n; i++) delete[] t[i];
    delete[] t;
}
void printTable(int** dp, int n){
    for (int i=0; i<=n; i++){
        for (int j=0; j<pow(2,n); j++){
            if (dp[i][j] == 1e9) cout << "INF" << "\t";
            else cout << dp[i][j] << "\t";
        }
        cout << endl;
    }
}
void INPUT(){
    int n; cin >> n;
    int** table = setMem(n);

    int** dp = new int*[n+1];
    for (int i=0; i<=n; i++){
        dp[i] = new int[int(pow(2, n))];
        fill_n(dp[i], int(pow(2,n)), 1e9);
        dp[i][0] = 0;
    }
    
    for (int i=1; i<pow(2,n); i++){
        for (int city = 1; city <= n; city++){
            int check = 1 << (city - 1);
            if (!(i & check)) continue;

            int prev_bit = i & (~check);
            if (prev_bit == 0){
                dp[city][i] = 0;
            }
            else{
                for (int prev = 1; prev <= n; prev++){
                    if ((prev_bit & (1 << (prev-1)))){
                        dp[city][i] = min(dp[city][i], dp[prev][prev_bit] + table[prev][city]);
                    }
                }
            }
        }
    }

    printTable(dp, n);
    int ans = int(1e9);
    // for (int i=1; i<=n; i++){
        
    // }
    
    freeMem(table, n);
    freeMem(dp, n);
}

int main(){
    INIT();
    INPUT();
    return 0;
}