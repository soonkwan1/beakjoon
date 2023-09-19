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

void dfs(vector<int>* g, bool* visited, int start, int* num){
    visited[start] = true;
    (*num)++;

    for (int i=0; i<g[start].size(); i++){
        if (!visited[g[start][i]]){
            dfs(g, visited, g[start][i], num);
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
        for (int j=0; j<n; j++){
            cin >> table[i][j];
        }
    }

    vector<int> v;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            
        }
    }

    sort(v.begin(), v.end());

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

/*
7
0110100
0110101
1110101
0000111
0100000
0111110
0111000
*/