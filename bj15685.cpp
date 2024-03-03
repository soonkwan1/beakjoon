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

int m[101][101];
int n;
void printM(){
    int t = 10;
    for (int i=0; i<t; i++){
        for (int j=0; j<t; j++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
void rotateDir(vector<int>& dir){
    int dirSize = dir.size();
    for (int i=dirSize-1; i>=0; i--){
        int nDir = dir[i] == 3 ? 0 : dir[i] + 1;
        dir.push_back(nDir);
    }
}
void gridMap(int x, int y, vector<int> dir){
    int dx[4] = {0, -1, 0, 1}, dy[4] = {1, 0, -1 ,0};
    m[x][y] = 1;
    for (int i=0; i<dir.size(); i++){    
        // cout << "x: " << x << ", y: " << y << endl;
        x += dx[dir[i]], y += dy[dir[i]];
        m[x][y] = 1;
    }
}
void INPUT(){
    // printM();
    cin >> n;
    for (int i=0; i<n; i++){
        int s, e, d, gen; cin >> s >> e >> d >> gen;
        vector<int> dir; dir.push_back(d);
        for (int i=0; i<gen; i++){
            rotateDir(dir);
        }
        // for (int i=0; i<dir.size(); i++) cout << dir[i] << " ";
        // cout << endl;
        gridMap(e, s, dir);
    }
    // printM();
    int ans = 0;
    for (int i=0; i<100; i++){
        for (int j=0; j<100; j++){
            if (m[i][j] + m[i+1][j] + m[i][j+1] + m[i+1][j+1] == 4){
                ans++;
            }
        }
    }
    cout << ans << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}