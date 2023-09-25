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
int** memSet(int n, int m){
    int** table = new int*[n];
    for (int i=0; i<n; i++){
        table[i] = new int[m];
        for (int j=0; j<m; j++){
            cin >> table[i][j];
        }
    }
    return table;
}
void freeMem(int** t, int n){
    for (int i=0; i<n; i++) delete[] t[i];
    delete[] t;
}
void printTable(int** t, int n, int m){
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
}
int bfs(int** table, vector<pair<int,int> > diseases, int n, int m){
    deque<pair<int,int> > nodes;
    for (int i=0; i<diseases.size(); i++){
        nodes.push_back(make_pair(diseases[i].first, diseases[i].second));
    }

    int** tmp = new int*[n];
    for (int i=0; i<n; i++){
        tmp[i] = new int[m];
        for (int j=0; j<m; j++){
            tmp[i][j] = table[i][j];
        }
    }

    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {-1, 1, 0, 0};

    while (!nodes.empty()){
        int x = nodes.front().first;
        int y = nodes.front().second;
        nodes.pop_front();

        for (int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < n && ny >= 0 && ny < m){
                if (tmp[nx][ny] == 0){
                    tmp[nx][ny] = 2;
                    nodes.push_back(make_pair(nx, ny));
                }
            }
        }
    }

    int res = 0;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (tmp[i][j] == 0){
                res++;
            }
        }
    }

    for (int i=0; i<n; i++) delete[] tmp[i];
    delete[] tmp;
    return res;
}
void dfs(int** table, int cnt, int start_idx, vector<pair<int,int> > roads, vector<pair<int,int> > diseases, int n, int m, int* ans){
    if (cnt == 3){
        int res = bfs(table, diseases, n, m);
        if (res > *ans) *ans = res;
        return;
    }

    for (int i=start_idx; i<roads.size(); i++){
        table[roads[i].first][roads[i].second] = 1;
        dfs(table, cnt+1, i+1, roads, diseases, n, m, ans);
        table[roads[i].first][roads[i].second] = 0;
    }
}
vector<pair<int,int> > findRoad(int** table, int n, int m){
    vector<pair<int,int> > tmp;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (table[i][j] == 0) tmp.push_back(make_pair(i,j));
        }
    }
    return tmp;
}
vector<pair<int,int> > findDisease(int** table, int n, int m){
    vector<pair<int,int> > tmp;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (table[i][j] == 2) tmp.push_back(make_pair(i,j));
        }
    }
    return tmp;
}
void INPUT(){
    int n, m; cin >> n >> m;
    int ans = 0;
    int** table = memSet(n, m);
    vector<pair<int,int> > roads = findRoad(table, n, m);
    vector<pair<int,int> > diseases = findDisease(table, n, m);
    dfs(table, 0, 0, roads, diseases, n, m, &ans);
    cout << ans << endl;
    freeMem(table, n);
}

int main(){
    INIT();
    INPUT();
    return 0;
}