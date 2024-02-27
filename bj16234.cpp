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

int n, l, r;
int** m;
int** v;
void printM(){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
void getMem(){
    m = new int*[n];
    v = new int*[n];
    for (int i=0; i<n; i++){
        m[i] = new int[n];
        v[i] = new int[n]; fill_n(v[i], n, 0);
        for (int j=0; j<n; j++){
            cin >> m[i][j];
        }
    }
}
void freeMem(){
    for (int i=0; i<n; i++) {
        delete[] m[i];
        delete[] v[i];
    }
    delete[] v;
    delete[] m;
}
void INPUT(){
    cin >> n >> l >> r;
    getMem();
}
void initVisit(){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            v[i][j] = 0;
        }
    }
}
bool isRange(int x, int y){
    if (x < 0 || x >= n) return false;
    if (y < 0 || y >= n) return false;
    return true;
}
void bfs(int x, int y, int team, int& flag){
    int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1 ,1};
    deque<pair<int,int> > dq;
    dq.push_back(make_pair(x, y));
    v[x][y]= team;

    vector<pair<int,int> > points;
    int total = 0;
    int cnt = 0;
    while (!dq.empty()){
        int ix = dq.front().first;
        int iy = dq.front().second;
        int cur_val = m[ix][iy];
        points.push_back(make_pair(ix, iy));
        total += cur_val;
        cnt++;
        dq.pop_front();

        for (int i=0; i<4; i++){
            int nx = ix + dx[i], ny = iy + dy[i];

            if (isRange(nx, ny) && v[nx][ny] == 0){
                int next_val = m[nx][ny];
                int deter = abs(cur_val - next_val);
                if (deter >= l && deter <= r){
                    flag = false;
                    v[nx][ny] = team;
                    dq.push_back(make_pair(nx, ny));
                }
            }
        }
    }

    int ret = total / cnt;
    for (int i=0; i<points.size(); i++){
        m[points[i].first][points[i].second] = ret;
    }
}
void SOLUTION(){
    int ans = 0;
    while (true){
        int team = 1;
        initVisit();
        int flag = true;
        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                if (v[i][j] == 0){
                    bfs(i, j, team, flag);
                    team++;
                }
            }
        }
        
        if (flag) break;
        else ans++;
    }
    cout << ans << endl;
    freeMem();
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}