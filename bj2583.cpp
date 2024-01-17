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

void freeTable(int** table, int n){
    for (int i=0; i<n; i++) delete[] table[i];
    delete[] table;
}
int** getTable(int r, int c, int k){
    int** table = new int*[r];
    for (int i=0; i<r; i++){
        table[i] = new int[c];
        fill_n(table[i], c, 1);
    }

    for (int i=0; i<k; i++){
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        for (int x=x1; x<x2; x++){
            for (int y=y1; y<y2; y++){
                table[x][y] = 0;
            }
        }
    }
    return table;
}
void printTable(int** table, int n, int m){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}
int bfs(int** table, int r, int c, int x, int y){
    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    deque<pair<int,int> > dq;
    dq.push_back(make_pair(x, y));

    int ret_val = 1;
    table[x][y] = 0;

    while(!dq.empty()){
        int ix = dq.front().first;
        int iy = dq.front().second;
        dq.pop_front();

        for (int i=0; i<4; i++){
            int nx = ix + dx[i];
            int ny = iy + dy[i];
            if (nx >= 0 && nx < r && ny >= 0 && ny < c){
                if (table[nx][ny] == 1){
                    table[nx][ny] = 0; ret_val++;
                    dq.push_back(make_pair(nx, ny));
                }
            }
        }
    }
    return ret_val;
}
struct compMin{
    bool operator() (const int& a, const int& b) const{
        return a < b;
    }
};
void INPUT(){
    int c, r, k; cin >> c >> r >> k;
    int** table = getTable(r, c, k);

    vector<int> ans;
    for (int i=0; i<r; i++){
        for (int j=0; j<c; j++){
            if (table[i][j] == 1){
                ans.push_back(bfs(table, r, c, i, j));
            }
        }
    }
    sort(ans.begin(), ans.end(), compMin());

    cout << ans.size() << endl;
    for (int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    freeTable(table, r);
}
int main(){
    fastio;
    INPUT();
    return 0;
}