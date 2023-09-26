#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void printTable(char** t, int row, int col){
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
}
char** setMem(int row, int col){
    char** tmp = new char*[row];
    for (int i=0; i<row; i++){
        tmp[i] = new char[col];
        for (int j=0; j<col; j++){
            cin >> tmp[i][j];
        }
    }
    for (int i=0; i<col; i++){
        tmp[0][i] = 'O';
        tmp[row-1][i] = 'O';
    }
    for (int i=0; i<row; i++){
        tmp[i][0] = 'O';
        tmp[i][col-1] = 'O';
    }

    return tmp;
}
void freeMem(char** t, int row){
    for (int i=0; i<row; i++) delete[] t[i];
    delete[] t;
}
void updateTable(char** t, int row, int col){
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1 ,1, 0 ,0};

    bool** visited = new bool*[row];
    for (int i=0; i<row; i++){
        visited[i] = new bool[col];
        fill_n(visited[i], col, false);
    }

    deque<pair<int,int> > nodes;
    nodes.push_back(make_pair(0,0));
    visited[0][0] = true;

    while (!nodes.empty()){
        int x = nodes.front().first;
        int y = nodes.front().second;
        nodes.pop_front();

        if (t[x][y] == '0'){
            t[x][y] = 'O';
        }

        for (int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < row && ny >= 0 && ny < col){
                if (visited[nx][ny] == false && t[nx][ny] != '1'){
                    visited[nx][ny] = true;
                    nodes.push_back(make_pair(nx, ny));
                }
            }
        }
    }

    for (int i=0; i<row; i++) delete[] visited[i];
    delete[] visited;
}
bool isEmptyTable(char** t, int row, int col){
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if (t[i][j] != 'O'){
                return false;
            }
        }
    }
    return true;
}
void meltCheese(char** t, int row, int col){
    vector<pair<int,int> > nodes;

    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1 ,1, 0 ,0};
    
    for (int i=0; i<row; i++){
        for (int j=0; j<col; j++){
            if (t[i][j] == '1'){
                int cnt = 0;
                for (int k=0; k<4; k++){
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    if (t[nx][ny] == 'O') cnt++;
                }

                if (cnt >= 2){
                    nodes.push_back(make_pair(i, j));
                }
            }
        }
    }

    for (int i=0; i<nodes.size(); i++){
        t[nodes[i].first][nodes[i].second] = 'O';
    }
}
void INPUT(){
    int row, col; cin >> row >> col;
    char** table = setMem(row, col);
    int res = 0;
    updateTable(table, row, col);
    while (!isEmptyTable(table, row, col)){
        updateTable(table, row, col);
        meltCheese(table, row, col);
        res++;
    }
    cout << res << endl;
    freeMem(table, row);
}

int main(){
    INIT();
    INPUT();
    return 0;
}
/*
5 5
0 0 0 0 0
0 1 1 1 0
0 1 0 1 0
0 1 1 1 0
0 0 0 0 0
*/