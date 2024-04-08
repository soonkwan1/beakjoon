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

int n;
int ans;
int** bamboo;
int** dp;
bool** visited;
int dx[4] = {0, 0, -1, 1}, dy[4] = {-1, 1, 0, 0};
void setMem(){
    bamboo = new int*[n];
    for (int i=0; i<n; i++){
        bamboo[i] = new int[n];
        for (int j=0; j<n; j++){
            cin >> bamboo[i][j];
        }
    }
}
void freeMem(){
    for (int i=0; i<n; i++) delete[] bamboo[i];
    delete[] bamboo;
}
void setVisit(){
    visited = new bool*[n];
    for (int i=0; i<n; i++){
        visited[i] = new bool[n];
    }
}
void initVisit(){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            visited[i][j] = false;
        }
    }
}
void freeVisit(){
    for (int i=0; i<n; i++) delete[] visited[i];
    delete[] visited;
}
void setDP(){
    dp = new int*[n];
    for (int i=0; i<n; i++){
        dp[i] = new int[n];
        fill_n(dp[i], n, 0);
    }
}
void freeDP(){
    for (int i=0; i<n; i++) delete[] dp[i];
    delete[] dp;
}
bool isRange(int x, int y){
    if (x < 0 || x >= n) return false;
    if (y < 0 || y >= n) return false;
    return true;
}
int dfs(int x, int y, int cnt){
    dp[x][y] = 1;
    for (int i=0; i<4; i++){
        int nx = x + dx[i], ny = y + dy[i];
        if (!isRange(nx, ny) || bamboo[nx][ny] <= bamboo[x][y] || visited[nx][ny]) continue;
        
        if (dp[nx][ny]){
            dp[x][y] = max(dp[x][y], dp[nx][ny] + cnt);
        }
        else {
            visited[nx][ny] = true;            
            dp[x][y] = max(dp[x][y], dfs(nx, ny, cnt) + 1);
            visited[nx][ny] = false;
        }
    }

    return dp[x][y];
}
void SOLUTION(){
    setVisit();
    initVisit();
    setDP();
    
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (dp[i][j]) continue;
            visited[i][j] = true;
            dp[i][j] = dfs(i, j, 1);
            visited[i][j] = false;
        }
    }

    ans = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            ans = max(ans, dp[i][j]);
            // cout << dp[i][j] << " ";
        }
        // cout << endl;
    }
    cout << ans << endl;
    freeVisit();
    freeDP();
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