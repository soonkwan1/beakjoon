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
int** dist;
void getMem(){
    m = new char*[r];
    dist = new int*[r];
    for (int i=0; i<r; i++){
        m[i] = new char[c];
        dist[i] = new int[c];
        fill_n(dist[i], c, 0);
        string line; cin >> line;
        for (int j=0; j<c; j++){
            m[i][j] = line[j];
        }
    }
}
void freeMem(){
    for (int i=0; i<r; i++) {
        delete[] m[i];
        delete[] dist[i];
    }
    delete[] m;
    delete[] dist;
}
bool isRange(int x, int y){
    if (x >= r || x < 0) return false;
    if (y >= c || y < 0) return false;
    return true;
}
void initDist(){
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            dist[i][j] = 0;
        }
    }
}
int bfs(int x, int y){ 
    int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
    deque<pair<pair<int,int>, int> > dq;
    dq.push_back(make_pair(make_pair(x, y), 0));
    dist[x][y] = -1;

    int ret = 0;
    while (!dq.empty()){
        int ix = dq.front().first.first;
        int iy = dq.front().first.second;
        int ic = dq.front().second;
        dq.pop_front();

        for (int i=0; i<4; i++){
            int nx = ix + dx[i];
            int ny = iy + dy[i];

            if (isRange(nx, ny) && dist[nx][ny] == 0 && m[nx][ny] == 'L'){
                dist[nx][ny] = ic + 1;
                ret = max(ret, dist[nx][ny]);
                dq.push_back(make_pair(make_pair(nx, ny), ic + 1));
            }
        }
    }
    return ret;
}

void SOLUTION(){
    int ans = 0;
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            if (m[i][j] == 'W') continue;
            initDist();
            ans = max(ans, bfs(i, j));
        }
    }
    cout << ans << endl;
}
void INPUT(){
    cin >> r >> c;
    getMem();
    SOLUTION();
    freeMem();
}

int main(){
    fastio;
    INPUT();   
    return 0;
}