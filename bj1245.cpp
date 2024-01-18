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
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
bool isRange(int nx, int ny, int n, int m){
    if (nx >= 0 && nx < n && ny >= 0 && ny < m){
        return true;
    }
    return false;
}
void bfs(int** table, int n, int m){
    bool** visited = new bool*[n];
    for (int i=0; i<n; i++) {
        visited[i] = new bool[m];
        fill_n(visited[i], m, false);
    }
    

    deque<pair<int,int> > dq;
    dq.push_front(make_pair(0, 0));

    int ans = 0;
    while (!dq.empty()){
        int x = dq.front().first;
        int y = dq.front().second;
        dq.pop_front();

        bool flag = true;
        for (int i=0; i<8; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (isRange(nx, ny, n, m) && !visited[nx][ny]){
                visited[nx][ny] = true;
                dq.push_back(make_pair(nx, ny));
                
                if (table[nx][ny] >= table[x][y]) flag = false;
            }
        }

        if (flag){
            ans++;
        }
    }

    for (int i=0; i<n; i++) delete[] visited[i];
    delete[] visited;
}
int** getTable(int n, int m){
    int** table = new int*[n];
    for (int i=0; i<n; i++) table[i] = new int[m];

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> table[i][j];
        }
    }
    return table;
}
void freeTable(int** t, int n){
    for (int i=0; i<n; i++) delete[] t[i];
    delete[] t;
}
void dfs(int** table, int** visited, int x, int y, int n, int m, int val, bool& flag){
    visited[x][y] = 1;

    for (int i=0; i<8; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (isRange(nx, ny, n, m)){
            if (table[nx][ny] > val){
                flag = false;
            }
            else if (table[nx][ny] == val && !visited[nx][ny]){
                dfs(table, visited, nx ,ny, n, m, val, flag);
            }
            
        }
        
    }
}
int** getVisit(int n, int m){
    int** t = new int*[n];
    for (int i=0; i<n; i++){
        t[i] = new int[m];
        fill_n(t[i], m, 0);
    }
    return t;
}
void INPUT(){
    int n, m; cin >> n >> m;
    int** table = getTable(n, m);
    int** visited = getVisit(n, m);

    int ans = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            bool flag = true;
            if (!visited[i][j]){
                dfs(table, visited, i, j, n, m, table[i][j], flag);
                if (flag) ans++;
            }
        }
    }
    cout << ans << endl;

    freeTable(table, n);
    freeTable(visited, n);
}

int main(){
    fastio;
    INPUT();
    return 0;
}

/*
8 7
4 3 2 2 1 0 1
3 3 3 2 1 0 1
2 2 4 2 1 0 0
2 1 1 1 1 0 0
1 1 0 0 0 1 0
0 0 0 1 1 1 0
0 1 2 2 1 1 0
0 1 1 1 2 1 0
*/