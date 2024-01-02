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
#define fse(A,B,C) for (int i=A; i<B; i+=C)
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void bfs(int** table, int n, int m){
    bool** visited = new bool*[n];
    for (int i=0; i<n; i++) {
        visited[i] = new bool[m];
        fill_n(visited, m, false);
    }
    int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
    int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

    deque<pair<int,int> > dq;
    dq.push_front(make_pair(0, 0));

    while (!dq.empty()){
        int x = dq.front().first;
        int y = dq.front().second;
        dq.pop_front();

        for (int i=0; i<8; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !visited[nx][ny]){
                visited[nx][ny] = true;
            }
        }
    }

    for (int i=0; i<n; i++) delete[] visited[i];
    delete[] visited;
}

void INPUT(){
    int n, m; cin >> n >> m;
    int** table = new int*[n];
    for (int i=0; i<n; i++) table[i] = new int[m];

    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> table[i][j];
        }
    }




    for (int i=0; i<n; i++) delete[] table[i];
    delete[] table;
}

int main(){
    INIT();
    INPUT();
    return 0;
}