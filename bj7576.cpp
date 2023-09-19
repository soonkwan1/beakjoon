#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

int** intAlloc(int row, int col){
    int** tmp = new int*[row];
    for (int i=0; i<row; i++) {
        tmp[i] = new int[col];
    }
    return tmp;
}
void freeMemory(int** t, int row){
    for (int i=0; i<row; i++){
        delete[] t[i];
    }
    delete[] t;
}
int checkTable(int** t, int row, int col){
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if (t[i][j] == 0){
                return 0;
            }
        }
    }
    return 1;
}
int maxTable(int** t, int row, int col){
    int tmp = -1;
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if (t[i][j] > tmp){
                tmp = t[i][j];
            }
        }
    }
    return tmp;
}
void bfs(int** table, int row, int col){
    deque<pair<int, int> > dq;
    deque<int> cnt;
    
    int** visited = intAlloc(row, col);
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            visited[i][j] = 0;
            if (table[i][j] == 1){
                dq.push_back(make_pair(i, j));
                cnt.push_back(1);
                visited[i][j] = 1;
            }
        }
    }

    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0 ,0};

    while (!dq.empty()){
        int x = dq.front().first;
        int y = dq.front().second;
        int cost = cnt.front();
        dq.pop_front();
        cnt.pop_front();
        

        for (int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < row && ny >= 0 && ny < col){
                if (table[nx][ny] == 0 && visited[nx][ny] == 0){
                    visited[nx][ny] = 1;
                    table[nx][ny] = cost + 1;
                    dq.push_back(make_pair(nx, ny));
                    cnt.push_back(cost + 1);
                }
            }
        }
    }

    if (checkTable(table, row, col)){
        cout << maxTable(table, row, col) - 1 << "\n";
    }
    else{
        cout << -1 << "\n";
    }
    freeMemory(visited, row);
}
void INPUT(){
    int row, col;
    cin >> col >> row;
    int** table = intAlloc(row, col);
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cin >> table[i][j];
        }
    }
    bfs(table, row, col);
    freeMemory(table, row);
}

int main(){
    INIT();
    INPUT();
    return 0;
}