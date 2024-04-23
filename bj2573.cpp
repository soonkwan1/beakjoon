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
int** table;
bool** visited;

void startCode(){
    table = new int*[r];
    visited = new bool*[r];
    for (int i=0; i<r; i++){
        table[i] = new int[c];
        visited[i] = new bool[c];
        for (int j=0; j<c; j++){
            cin >> table[i][j];
        }
    }

    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            visited[i][j] = table[i][j] == 0 ? true : false;
        }
    }
}
void endCode(){
    for (int i=0; i<r; i++){
        delete[] table[i];
        delete[] visited[i];
    }
    delete[] table;
    delete[] visited;
}
void printTable(){
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}
bool isRange(int x, int y){
    if (x < 0 || x >= r) return false;
    if (y < 0 || y >= c) return false;
    return true;
}
void initVisited(){
    for (int i=0; i<r; i++){
        fill_n(visited[i], c, false);
    }
}
void bfs(int start_x, int start_y){
    deque<pair<int,int> > dq;
    dq.push_back(make_pair(start_x, start_y));
    visited[start_x][start_y] = true;


    int dx[4] = {-1, 1, 0 ,0}, dy[4] = {0, 0, -1, 1};
    while(!dq.empty()){
        int ix = dq.front().first;
        int iy = dq.front().second;
        dq.pop_front();

        for (int i=0; i<4; i++){
            int nx = ix + dx[i], ny = iy + dy[i];
            if (!isRange(nx, ny) || visited[nx][ny]) continue;

            if (table[nx][ny] == 0){
                visited[nx][ny] = true;
                dq.push_back(make_pair(nx, ny));
            }
            else{
                table[nx][ny]--;
                if (!table[nx][ny]) visited[nx][ny] = true;
            }
        }
    }
}
void printVisited(){
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cout << visited[i][j] << " ";
        }
        cout << endl;
    }
}
int answerCheck(){
    // visited matrix
    vector<pair<int,int> > v;
    bool flag = false;
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            if (visited[i][j] == false){
                v.push_back(make_pair(i, j));
                flag = true;
                break;
            }
        }
        if (flag) break;
    }

    if (v.size() == 0) return 0;

    int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
    deque<pair<int,int> > dq;
    dq.push_back(make_pair(v[0].first, v[0].second));
    visited[dq.front().first][dq.front().second] = true;
    
    while(!dq.empty()){
        int ix = dq.front().first;
        int iy = dq.front().second;
        dq.pop_front();

        for (int i=0; i<4; i++){
            int nx = ix + dx[i], ny = iy + dy[i];
            
            if (!isRange(nx, ny) || visited[nx][ny]) continue;

            
            dq.push_back(make_pair(nx, ny));
            visited[nx][ny] = true;
        }
    }

    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            if (visited[i][j] == false) return 2;
        }
    }
    
    return 1;
}
void INPUT(){
    cin >> r >> c;
    startCode();

    int ans = 0;
    while (true){
        int flag = answerCheck();
        if (flag == 0){
            cout << 0 << endl;
            break;
        }
        else if (flag == 2){
            cout << ans << endl;
            break;
        }
        else if (flag == 1){
            initVisited();
            for (int i=0; i<r; i++){
                for (int j=0; j<c; j++){
                    if (!visited[i][j] && !table[i][j]){
                        bfs(i, j);
                    }
                }
            }
        }
        ans++;
    }

    endCode();
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}