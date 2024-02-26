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
vector<int> ans;
char** getMap(){
    char** m = new char*[r];
    for (int i=0; i<r; i++){
        m[i] = new char[c];
        string line; cin >> line;
        for (int j=0; j<line.size(); j++){
            m[i][j] = line[j];
        }
    }
    return m;
}
void freeMap(char** m){
    for (int i=0; i<r; i++) delete[] m[i];
    delete[] m;
}
void printMap(char** m){
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
void openDoor(char** m, char k){
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            if (m[i][j] == k || m[i][j] == char(int(k) - 32)){
                m[i][j] = '.';
            } 
        }
    }
}
void initVisit(bool** v){
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            v[i][j] = false;
        }
    }
}
deque<pair<int,int> > getStartPoint(char** m){
    deque<pair<int,int> > v;
    for (int i=0; i<r; i++){
        if (m[i][0] == '.') v.push_back(make_pair(i, 0));
        if (m[i][c - 1] == '.') v.push_back(make_pair(i, c-1));
    }
    for (int j=0; j<c; j++){
        if (m[0][j] == '.') v.push_back(make_pair(0, j));
        if (m[r - 1][j] == '.') v.push_back(make_pair(r-1, j));
    }
    return v;
}
bool** getVisited(){
    bool** tmp = new bool*[r];
    for (int i=0; i<r; i++){
        tmp[i] = new bool[c];
        fill_n(tmp[i], c, false);
    }
    return tmp;
}
void freeVisited(bool** t){
    for (int i=0; i<r; i++) delete[] t[i];
    delete[] t;
}
bool isRange(int x, int y){
    if (x < 0 || x >= r) return false;
    if (y < 0 || y >= c) return false;
    return true;
}
bool isSmall(char a){
    if (a <= 96 || a >= 124) return false;
    return true;
}
bool isBig(char a){
    if (a <= 64 || a >= 91) return false;
    return true;
}
void bfs(char** m, deque<pair<int,int> > sp){
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    bool** visited = getVisited();

    vector<pair<int, int> > tmp;
    for (int i=0; i<sp.size(); i++){
        tmp.push_back(make_pair(sp[i].first, sp[i].second));
        visited[sp[i].first][sp[i].second] = true;
    }

    int cnt = 0;
    while (!sp.empty()){
        int x = sp.front().first, y = sp.front().second;
        sp.pop_front();

        for (int i=0; i<4; i++){
            int nx = x + dx[i], ny = y + dy[i];
            if (isRange(nx, ny) && !visited[nx][ny]){
                if (m[nx][ny] == '.'){
                    visited[nx][ny] = true;
                    sp.push_back(make_pair(nx, ny));
                }
                else if (isSmall(m[nx][ny])){
                    initVisit(visited);
                    openDoor(m, m[nx][ny]);
                    sp = getStartPoint(m);
                    break;
                }
                else if (m[nx][ny] == '$'){
                    visited[nx][ny] = true;
                    m[nx][ny] = '.';
                    cnt++;
                    sp.push_back(make_pair(nx, ny));
                }
            }
        }
    }

    ans.push_back(cnt);
    freeVisited(visited);
}
void INPUT(){
    int t; cin >> t;
    while(t--){
        cin >> r >> c;
        char** m = getMap();
        vector<char> keys;

        string k; cin >> k;
        for (int i=0; i<k.size(); i++){
            keys.push_back(k[i]);
            openDoor(m, k[i]);
        }
        
        deque<pair<int,int> > start_points = getStartPoint(m);
        bfs(m, start_points);

        // printMap(m);
        freeMap(m);
    }
    for (int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }
}
int main(){
    fastio;
    INPUT();
    // SOLUTION();
    return 0;
}

/*
1
5 17
*****************
.............**$*
*B*A*P*C**X*Y*.X.
*y*x*a*p**$*$**$*
**********$YP****
************A****
cz
*/