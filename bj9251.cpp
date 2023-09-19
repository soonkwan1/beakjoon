#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void printDp(int** table, int row, int col){
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cout << table[i][j] << " ";
        }
        cout << "\n";
    }
}
void INPUT(){
    string a, b; cin >> a >> b;
    int row = a.size(); int col = b.size();
    int** dp = new int*[a.size()];
    for (int i=0; i<a.size(); i++) {
        dp[i] = new int[b.size()];
        fill_n(dp[i], col, 0);
    }

    if (a[0] == b[0]) dp[0][0] = 1;

    for (int i=1; i<a.size(); i++){
        if (dp[i-1][0] == 1 || b[0] == a[i]) dp[i][0] = 1;
    }
    for (int i=1; i<b.size(); i++){
        if (dp[0][i-1] == 1 || a[0] == b[i]) dp[0][i] = 1;
    }

    for (int i=1; i<row; i++){
        for (int j=1; j<col; j++){
            if (a[i] == b[j]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

    // printDp(dp, row, col);
    cout << dp[row-1][col-1] << "\n";
}

int main(){
    INIT();
    INPUT();
    return 0;
}