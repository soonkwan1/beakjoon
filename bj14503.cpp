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

int n, m, dir;
int pos_x, pos_y;
int ans = 0;
int** table;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void getTable(){
    table = new int*[n];
    for (int i=0; i<n; i++){
        table[i] = new int[m];
        for (int j=0; j<m; j++){
            cin >> table[i][j];
        }
    }
}
void delTable(){
    for (int i=0; i<n; i++) delete[] table[i];
    delete[] table;
}
void printTable(){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}
void robotTurn(){
    dir = dir == 0 ? 4 : dir - 1;
}
bool isRange(int x, int y){
    if (x >= 0 && x < n && y >= 0 && y < m){
        return true;
    }
    return false;
}
bool blankCheck(int x, int y){
    for (int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (isRange(nx, ny) && table[nx][ny] == 0){
            return true;
        }
    }
    return false;
}
void dfs(){
    if (table[pos_x][pos_y] == 0) {
        ans++;
        table[pos_x][pos_y] = 2;
    }

    if (!blankCheck(pos_x, pos_y)){
        int nx = pos_x - dx[dir];
        int ny = pos_y - dy[dir];
        if (isRange(nx, ny) && table[nx][ny] != 1){
            pos_x = nx, pos_y = ny;
            dfs();
        }
    }
    else{
        robotTurn();
        int nx = pos_x + dx[dir];
        int ny = pos_y + dy[dir];
        if (isRange(nx, ny) && table[nx][ny] == 0){
            pos_x = nx, pos_y = ny;
        }
        dfs();
    }
}
void INPUT(){
    cin >> n >> m;
    cin >> pos_x >> pos_y >> dir;
    getTable();
    dfs();
    cout << ans << endl;
    delTable();
}

int main(){
    fastio;
    INPUT();
    return 0;
}