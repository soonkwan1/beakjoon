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

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

int** getTable(int r, int c){
    int** table = new int*[r];
    for (int i=0; i<r; i++){
        table[i] = new int[c];
        for (int j=0; j<c; j++){
            cin >> table[i][j];
        }
    }
    return table;
}
void printTable(int** table, int r, int c){
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}
void freeTable(int** table, int r){
    for (int i=0; i<r; i++) delete[] table[i];
    delete[] table;
}
int** getDP(int r, int c){
    int** dp = new int*[r];
    for (int i=0; i<r; i++){
        dp[i] = new int[c];
        fill_n(dp[i], c, -1);
    }
    return dp;
}
bool isRange(int x, int y, int r, int c){
    if (x >= 0 && x < r && y >= 0 && y < c) return true;
    return false;
}
int dfs(int** table, int** dp, int r, int c, int x, int y){
    if (x == r-1 && y == c-1){
        return 1;
    }

    if (dp[x][y] != -1){
        return dp[x][y];
    }

    int cnt = 0;
    for (int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (isRange(nx, ny, r, c) && (table[nx][ny] < table[x][y])){
            cnt += dfs(table, dp, r, c, nx, ny);
        }
    }
    dp[x][y] = cnt;
    return dp[x][y];
}
void INPUT(){
    // INPUT
    int r, c; cin >> r >> c;
    int** table = getTable(r, c);
    int** dp = getDP(r, c);

    // algorithm
    int ans = 0;
    dfs(table, dp, r, c, 0, 0);
    cout << dp[0][0] << endl;

    // free memory
    freeTable(table, r); freeTable(dp, r);
}

int main(){
    fastio;
    INPUT();
    return 0;
}