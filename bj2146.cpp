#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#define endl "\n"
#define ll long long
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

int n;
int** m;
bool** visited;

void INPUT(){
    cin >> n;
    m = new int*[n];
    visited = new bool*[n];
    for (int i=0; i<n; i++){
        m[i] = new int[n];
        visited[i] = new bool[n];
        for (int j=0; j<n; j++){
            cin >> m[i][j];
        }
        fill_n(visited[i], n, false);
    }
}
void freeMem(){
    for (int i=0; i<n; i++){
        delete[] m[i];
        delete[] visited[i];
    }
}
bool isRange(int x, int y){
    if (x < 0 || x >= n) return false;
    if (y < 0 || y >= n) return false;
    return true;
}
void bfs(int x, int y, int num, vector<pair<int,int> >* v){
    int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
    deque<pair<int,int> > dq;
    dq.push_back(make_pair(x, y));
    m[x][y] = num;

    while (!dq.empty()){
        int ix = dq.front().first;
        int iy = dq.front().second;
        dq.pop_front();

        int flag = 0;
        for (int i=0; i<4; i++){
            int nx = ix + dx[i], ny = iy + dy[i];
            if (!isRange(nx, ny)) continue;

            if (m[nx][ny] == 1){
                m[nx][ny] = num;
                dq.push_back(make_pair(nx, ny));
            }

            if (!flag && m[nx][ny] == 0){
                flag = 1;
                v[num - 2].push_back(make_pair(ix, iy));
            }
        }
    }
}
void SOLUTION(){
    vector<pair<int,int> >* island = new vector<pair<int,int> >[5000];

    int cnt = 2;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (m[i][j] == 1){
                bfs(i, j, cnt, island);
                cnt++;
            }
        }
    }
    int ans = int(1e9);
    // for (int i=0; i<cnt-2; i++){
    //     cout << "island : " << i << endl;
    //     for (int j=0; j<island[i].size(); j++){
    //         cout << island[i][j].first << " " << island[i][j].second << endl;
    //     }
    //     cout << endl;
    // }
    for (int i=0; i<cnt-2; i++){
        for (int j=0; j<cnt-2; j++){
            if (i == j) continue;
            for (int x=0; x<island[i].size(); x++){
                for (int y=0; y<island[j].size(); y++){
                    ans = min(ans, 
                    abs(island[i][x].first - island[j][y].first) + abs(island[i][x].second - island[j][y].second) - 1);
                }
            }
        }
    }
    cout << ans << endl;

    freeMem();
    delete[] island;
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}