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
int** setMem(int n, int m){
    int** temp = new int*[n+2];
    for (int i=0; i<=n+1; i++){
        temp[i] = new int[m+2];
    }
    for (int i=1; i<=n; i++){
        string line; cin >> line;
        for (int j=1; j<=m; j++){
            temp[i][j] = int(line[j-1]) - 48;
        }
    }
    for (int i=0; i<=n+1; i++){
        temp[i][0] = 1;
        temp[i][m+1] = 1;
    }
    for (int i=0; i<=m+1; i++){
        temp[0][i] = 1;
        temp[n+1][i] = 1;
    }
    return temp;
}
void freeMem(int** t, int n){
    for (int i=0; i<=n+1; i++) delete[] t[i];
    delete[] t;
}
void printTable(int** t, int n, int m){
    for (int i=0; i<=n+1; i++){
        for (int j=0; j<=m+1; j++){
            cout << t[i][j] << " ";
        }
        cout << "\n";
    }
}
bool countOne(int** a, int x, int y){
    if (a[x][y] == 0) return false;
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};
    int res = 0;
    for (int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (a[nx][ny] == 1){
            res++;
        }
    }
    if (res >= 3) return false;
    return true;
}
vector<pair<int, int> > findOne(int** a, int n, int m){
    vector<pair<int,int> > res;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=m; j++){
            if (a[i][j] == 1){
                res.push_back(make_pair(i,j));
            }
        }
    }
    return res;
}
int bfs(int** table, int n, int m){
    deque<pair<pair<int,int>, int> > nodes;
    nodes.push_back(make_pair(make_pair(1,1), 1));

    int res = -1;
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};

    int** visited = new int*[n+2];
    for (int i=0; i<=n+1; i++){
        visited[i] = new int[m+2];
        fill_n(visited[i], m+2, 0);
    }

    while (!nodes.empty()){
        int x = nodes.front().first.first;
        int y = nodes.front().first.second;
        int cost = nodes.front().second;
        nodes.pop_front();

        if (x == n && y == m){
            res = cost;
            break;
        }

        for (int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >=1 && nx <= n && ny >= 1 && ny <= m){
                if (table[nx][ny] == 0 && visited[nx][ny] == 0){
                    visited[nx][ny] = 1;
                    nodes.push_back(make_pair(make_pair(nx, ny), cost+1));
                }
            }
        }
    }
    for (int i=0; i<=n+1; i++) delete[] visited[i];
    delete[] visited;

    return res;
}
void INPUT(){
    int n, m; cin >> n >> m;
    int** table = setMem(n, m);
    vector<pair<int,int> > one_list = findOne(table, n, m);

    int ans = -1;
    int res = int(1e9);
    for (int i=0; i<one_list.size(); i++){
        table[one_list[i].first][one_list[i].second] = 0;
        ans = bfs(table, n, m);
        table[one_list[i].first][one_list[i].second] = 1;
        if (ans == -1) continue;
        res = min(ans, res);
    }

    if (res == int(1e9)) cout << -1 << "\n";
    else cout << res << "\n";
    freeMem(table, n);
}

int main(){
    INIT();
    INPUT();
    return 0;
}