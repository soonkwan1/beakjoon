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
#define INF 987654321

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
            cin >> tmp[i][j];
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
int dfs(int curr, int prev, int start, int n, int** dp, int** table){
    if (curr == pow(2, n) - 1){
        if (table[prev][start]){
            return table[prev][start];
        }
        return INF;
    }

    
    for (int i=1; i<=n; i++){
        if ((curr & (1 << (i-1)))) continue;
        if (!table[prev][i]) continue;
        int new_bit = (curr | 1 << (i-1));

        dp[i][new_bit] = min(dp[i][new_bit], dfs(new_bit, i, start, n, dp, table));
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
    
    for (int i=1; i<=n; i++){
        int start_bit = 1 << (i-1);
        dfs(start_bit, i, i, n, dp, table);
    }

    printTable(dp, n);
    
    freeMem(table, n);
    freeMem(dp, n);
}

int main(){
    INIT();
    INPUT();
    return 0;
}