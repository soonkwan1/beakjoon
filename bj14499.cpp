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

int n, m;
int state[6] = {0, 0, 0, 0, 0, 0};
int** table;
void getMem(){
    table = new int*[n];
    for (int i=0; i<n; i++){
        table[i] = new int[m];
        for (int j=0; j<m; j++){
            cin >> table[i][j];
        }
    }
}
void freeMem(){
    for (int i=0; i<n; i++) delete[] table[i];
    delete[] table;
}
bool isRange(int x, int y){
    if (x >= n || x < 0) return false;
    if (y >= m || y < 0) return false;
    return true;
}
void moveDice(int dir){
    int new_state[6];
    if (dir == 0){
        new_state[1] = state[1], new_state[4] = state[4],
        new_state[0] = state[3], new_state[2] = state[0], 
        new_state[3] = state[5], new_state[5] = state[2];
    }
    else if (dir == 1){
        new_state[1] = state[1], new_state[4] = state[4],
        new_state[0] = state[2], new_state[2] = state[5], 
        new_state[3] = state[0], new_state[5] = state[3];
    }
    else if (dir == 2){
        new_state[2] = state[2], new_state[3] = state[3];
        new_state[0] = state[4], new_state[4] = state[5],
        new_state[5] = state[1], new_state[1] = state[0];
    }
    else if (dir == 3){
        new_state[2] = state[2], new_state[3] = state[3];
        new_state[0] = state[1], new_state[4] = state[0],
        new_state[5] = state[4], new_state[1] = state[5];
    }
    for (int i=0; i<6; i++) state[i] = new_state[i];
}
void INPUT(){
    cin >> n >> m;
    int x, y; cin >> x >> y;
    int k; cin >> k;
    getMem();

    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {1, -1, 0, 0};
    for (int i=0; i<k; i++){
        int dir; cin >> dir;
        dir--;
        int nx = x + dx[dir], ny = y + dy[dir];

        if (isRange(nx, ny)){
            moveDice(dir);
            if (table[nx][ny]){
                state[5] = table[nx][ny];
                table[nx][ny] = 0;
            }
            else{
                table[nx][ny] = state[5];
            }
            cout << state[0] << endl;
            x = nx, y = ny;
        }
    }

    freeMem();
}
void SOLUTION(){
    
}
int main(){
    INPUT();
    fastio;
    // SOLUTION();
    return 0;
}   