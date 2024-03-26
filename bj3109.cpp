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

int r, c;
char** m;
bool** visited;
int dx[3] = {-1, 0, 1};
void getMap(){
    m = new char*[r];
    for (int i=0; i<r; i++){
        m[i] = new char[c];
        string line; cin >> line;
        for (int j=0; j<c; j++){
            m[i][j] = line[j];
        }
    }
}
void freeMap(){
    for (int i=0; i<r; i++) delete[] m[i];
    delete[] m;
}
void printMap(){
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
void getVisited(){
    visited = new bool*[r];
    for (int i=0; i<r; i++){
        visited[i] = new bool[c];
    }
}
void freeVisited(){
    for (int i=0; i<r; i++) delete[] visited[i];
    delete[] visited;
}
void initVisited(){
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            visited[i][j] = false;
        }
    }
}
void INPUT(){
    cin >> r >> c;
    getMap();
}
bool isRange(int x, int y){
    if (x < 0 || x >= r) return false;
    if (y < 0 || y >= c) return false;
    return true;
}
int dfs(int x, int y, int start){
    visited[x][y] = true;

    if (y == c - 1){
        return 1;
    }

    for (int i=0; i<3; i++){
        int nx = x + dx[i];
        int ny = y + 1;
        if (isRange(nx, ny) && !visited[nx][ny] && m[nx][ny] != 'x'){
            int res = dfs(nx, ny, start);
            if (res) return 1;
            // visited[nx][ny] = false;
        }
    }
    return 0;
}
void SOLUTION(){
    getVisited();
    initVisited();

    int ans = 0;
    for (int i=0; i<r; i++){    
        ans += dfs(i, 0, i);
    }
    cout << ans << endl;
    freeMap();
    freeVisited();
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}