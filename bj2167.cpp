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
#define fse(A,B,C) for (int i=A; i<B; i+=C)
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
int** getTable(int n, int m){
    int** tmp = new int*[n+1];
    for (int i=0; i<=n; i++){
        tmp[i] = new int[m+1];
        fill_n(tmp[i], m+1, 0);

        if (!i) continue;

        for (int j=1; j<=m; j++){
            cin >> tmp[i][j];
        }
    }
    return tmp;
}
void freeTable(int** t, int n){
    for (int i=0; i<=n; i++){
        delete[] t[i];
    }
    delete[] t;
}
void printTable(int** t, int n, int m){
    for (int i=0; i<=n; i++){
        for (int j=0; j<=m; j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
}
void INPUT(){
    int n, m; cin >> n >> m;
    int** table = getTable(n, m);
    // printTable(table, n, m);
    
    int** dp = new int*[n+1];
    for (int i=0; i<=n; i++){
        dp[i] = new int[m+1];
        fill_n(dp[i], m+1, 0);
    }

    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + table[i][j];
        }
    }

    int t; cin >> t;
    for (int i=0; i<t; i++){
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        cout << dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1] << endl;

    }

    // printTable(dp, n, m);

    freeTable(table, n);
    freeTable(dp, n);
}

int main(){
    INIT();
    INPUT();
    return 0;
}