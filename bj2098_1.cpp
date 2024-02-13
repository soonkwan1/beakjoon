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
    int** tmp = new int*[n];
    for (int i=0; i<n; i++){
        tmp[i] = new int[n];
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> tmp[i][j];
        }
    }
    return tmp;
}
void freeMem(int** t, int n){
    for (int i=0; i<n; i++) delete[] t[i];
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
int dfs(int curr_bit, int node, int n, int** dp, int** table){
    if (curr_bit == (1 << n) - 1){
        if (table[node][0] == 0){
            return INF;    
        }
        return table[node][0];
    }

    if (dp[node][curr_bit] != -1){
        return dp[node][curr_bit];
    }

    dp[node][curr_bit] = INF;
    for (int i=0; i<n; i++){
        // road existence check
        if (table[node][i] == 0) continue;
        // visited node check
        if ((curr_bit & (1 << i)) == (1 << i)) continue;

        // going bit
        int new_bit = (curr_bit | 1 << i);

        dp[node][curr_bit] = min(dp[node][curr_bit], table[node][i] +  dfs(new_bit, i, n, dp, table));
    }
    return dp[node][curr_bit];
}
void INPUT(){
    int n; cin >> n;
    int** table = setMem(n);

    int** dp = new int*[n];
    for (int i=0; i<n; i++){
        dp[i] = new int[1 << n];
        fill_n(dp[i], 1 << n, -1);
    }
    
    cout << dfs(0, 1, n, dp, table) << endl;

    // printTable(dp, n);

    freeMem(table, n);
    freeMem(dp, n);
}

int main(){
    INIT();
    INPUT();
    return 0;
}