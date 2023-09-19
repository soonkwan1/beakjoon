#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

void print_table(int** table, int n){
    cout << endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << table[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

void dfs(int** table, int row, int col, int n, int* res){
    table[row][col] = 0;
    (*res)++;
    
    for (int i=0; i<4; i++){
        int nx = row + dx[i];
        int ny = col + dy[i];

        if ((nx >= 0) && (nx < n) && (ny >= 0) && (ny < n)){
            if (table[nx][ny]){
                dfs(table, nx, ny, n, res);
            }
        }
    }
}

void bfs(vector<int>* g, int start, int size){
    queue<int> q;
    bool* visited = new bool[size+1];
    for (int i=0; i<=size; i++){
        visited[i] = false;
    }

    q.push(start);
    visited[start] = true;

    while (!q.empty()){
        int node = q.front();
        q.pop();

        for (int i=0; i<g[node].size(); i++){
            if (!visited[g[node][i]]){
                q.push(g[node][i]);
                visited[g[node][i]] = true;
            }
        }

    }
}

void INPUT(){
    int n;
    cin >> n;
    int** table = new int*[n];
    for (int i=0; i<n; i++){
        table[i] = new int[n];
        string line;
        cin >> line;
        for (int j=0; j<line.size(); j++){
            table[i][j] = int(line[j]) - 48;
        }
    }

    vector<int> ans;
    int res;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (table[i][j]){
                res = 0;
                dfs(table, i, j, n, &res);
                ans.push_back(res);
            }
        }
    }

    sort(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for (int i=0; i<ans.size(); i++){
        cout << ans[i] << "\n";
    }

    for (int i=0; i<n; i++){
        delete[] table[i];
    }
    delete[] table;
}

int main(){
    INIT();
    INPUT();
    return 0;
}