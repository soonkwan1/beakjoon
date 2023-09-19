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
    int** temp = new int*[n];
    for (int i=0; i<n; i++){
        temp[i] = new int[m];
        string line; cin >> line;
        for (int j=0; j<m; j++){
            temp[i][j] = int(line[j]) - 48;
        }
    }
    return temp;
}
void freeMem(int** t, int n){
    for (int i=0; i<n; i++) delete[] t[i];
    delete[] t;
}
void printTable(int** t, int n, int m){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << t[i][j] << " ";
        }
        cout << "\n";
    }
}
int bfs(int** table, int n, int m){
    int*** visited = new int**[2];
    for (int i=0; i<2; i++){
        visited[i] = new int*[n];
        for (int j=0; j<n; j++){
            visited[i][j] = new int[m];
            fill_n(visited[i][j], m, 0);
        }
    }
    
    visited[0][0][0] = 1;
    deque<pair<pair<int,int>, pair<int,int> > > nodes;
    nodes.push_back(make_pair(make_pair(0, 0), make_pair(1, 0)));

    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};

    int res = -1;
    while (!nodes.empty()){
        int x = nodes.front().first.first;
        int y = nodes.front().first.second;
        int c = nodes.front().second.first;
        int u = nodes.front().second.second;
        nodes.pop_front();

        if (x == n-1 && y == m-1){
            res = c;
            break;
        }

        for (int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m){
                if (visited[u][nx][ny] == 1) continue;
                if (table[nx][ny] == 0){
                    visited[u][nx][ny] = 1;
                    nodes.push_back(make_pair(make_pair(nx, ny), make_pair(c+1, u)));
                }
                else if (u == 0){
                    visited[1][nx][ny] = 1;
                    nodes.push_back(make_pair(make_pair(nx, ny), make_pair(c+1, 1)));
                }
            }
        }

    }

    for (int i=0; i<2; i++){
        for (int j=0; j<n; j++){
            delete[] visited[i][j];
        }
        delete[] visited[i];
    }
    return res;
}
void INPUT(){
    int n, m; cin >> n >> m;
    int** table = setMem(n, m);
    cout << bfs(table, n, m) << "\n";
    freeMem(table, n);
}
int main(){
    INIT();
    INPUT();
    return 0;
}