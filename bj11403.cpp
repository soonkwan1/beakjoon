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

void bfs(vector<int>* g, int start, int n, int** table){
    deque<int> dq;
    dq.push_back(start);

    int* visited = new int[n];
    for (int i=0; i<n; i++){
        visited[i] = 0;
    }

    visited[start] = 1;
    
    while (!dq.empty()){
        int node = dq.front();
        dq.pop_front();

        for (int i=0; i<g[node].size(); i++){
            table[start][g[node][i]] = 1;
            if (visited[g[node][i]] == 0){
                dq.push_back(g[node][i]);
                visited[g[node][i]] = 1;
            }
        }
    }

    delete[] visited;

}

void INPUT(){
    int n; cin >> n;
    int** table = new int*[n];
    for (int i=0; i<n; i++){
        table[i] = new int[n];
        for (int j=0; j<n; j++){
            cin >> table[i][j];
        }
    }

    vector<int>* g = new vector<int>[n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (table[i][j] == 1){
                g[i].push_back(j);
            }
        }
    }

    for (int i=0; i<n; i++){
        bfs(g, i, n, table);
    }

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << table[i][j] << " ";
        }
        cout << "\n";
    }

    for (int i=0; i<n; i++){
        delete[] table[i];
    }
    delete[] g;
    delete[] table;
}

int main(){
    INIT();
    INPUT();
    return 0;
}