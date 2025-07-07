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

void printTable(bool** table, int r, int c){
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}

bool isRange(int x, int y, int r, int c){
    if (x < 0 || x >= r) return false;
    if (y < 0 || y >= c) return false;
    return true;
}

void dfs(int** table, bool** visited, int x, int y, int r, int c){
    deque<pair<int,int> > dq;
    dq.push_back(make_pair(x, y));
    visited[x][y] = true;
    
    int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

    while (!dq.empty()){
        int ix = dq.front().first;
        int iy = dq.front().second;
        dq.pop_front();

        for (int i=0; i<8; i++){
            int nx = ix + dx[i];
            int ny = iy + dy[i];
            if (isRange(nx, ny, r, c)){
                if (table[nx][ny] == 1 && visited[nx][ny] == false){
                    visited[nx][ny] = true;
                    dq.push_back(make_pair(nx, ny));
                }
            }
        }
    }
}
void INPUT(){
    while (true){
        int c, r; cin >> c >> r;
        int ans = 0;
        if (!c && !r) break;

        int** table = new int*[r];
        bool** visited = new bool*[r];
        for (int i=0; i<r; i++){
            table[i] = new int[c];
            visited[i] = new bool[c]; fill_n(visited[i], c, 0);
            for (int j=0; j<c; j++) cin >> table[i][j];
        }

        for (int i=0; i<r; i++){
            for (int j=0; j<c; j++){
                if (table[i][j] == 1 && visited[i][j] == 0){
                    dfs(table, visited, i, j, r, c);
                    // printTable(visited, r, c);
                    ans++;
                }
            }
        }

        cout << ans << endl;

        for (int i=0; i<r; i++) {
            delete[] table[i];
            delete[] visited[i];
        }
        delete[] visited;
        delete[] table;
    }
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}