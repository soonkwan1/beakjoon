#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void freeMem(int** table, int n){
    for (int i=0; i<=n; i++){
        delete[] table[i];
    }
    delete[] table;
}
void printTable(int** table, int n){
    for (int i=0; i<=n+1; i++){
        for (int j=0; j<=n+1; j++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}
void INPUT(){
    int n, m; cin >> n >> m;
    int** table = new int*[n+1];
    int** dp = new int*[n+1];
    for (int i=0; i<=n; i++){
        table[i] = new int[n+1];
        dp[i] = new int[n+1];
        fill_n(table[i], n+1, 0);
        fill_n(dp[i], n+1, 0);
    }
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cin >> table[i][j];
        }
    }

    for (int i=1; i<=n; i++){
        dp[1][i] = dp[1][i-1] + table[1][i];
        dp[i][1] = dp[i-1][1] + table[i][1];
    }

    for (int i=2; i<=n; i++){
        for (int j=2; j<=n; j++){
            dp[i][j] = dp[i-1][j] + dp[i][j-1] + table[i][j] - dp[i-1][j-1];
        }
    }

    // vector<int> result;
    for (int i=0; i<m; i++){
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        cout << dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1] << "\n";
        // result.push_back(dp[x2][y2] - dp[x1 - 1][y2] - dp[x2][y1 - 1] + dp[x1 - 1][y1 - 1]);
    }

    // for (int i=0; i<result.size(); i++){
    //     cout << result[i] << "\n";
    // }

    // printTable(dp, n);

    freeMem(dp, n);
    freeMem(table, n);
}

int main(){
    INIT();
    INPUT();
    return 0;
}