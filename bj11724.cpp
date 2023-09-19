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

void dfs(vector<int>* g, int* visited, int start){
    visited[start] = 1;

    for (int i=0; i<g[start].size(); i++){
        if (visited[g[start][i]] == 0){
            dfs(g, visited, g[start][i]);
        }
    }
}

void INPUT(){
    int n, m, s, e;
    cin >> n >> m;
    vector<int>* graph = new vector<int>[n+1];

    for (int i=0;i<m;i++){
        cin >> s >> e;
        graph[s].push_back(e);
        graph[e].push_back(s);
    }

    int* visited = new int[n+1];
    for (int i=0; i<=n; i++){
        visited[i] = 0;
    }

    int flag = 0;
    for (int i=1; i<=n; i++){
        if (visited[i] == 0){
            dfs(graph, visited, i);
            flag++;
        }
    }

    cout << flag << "\n";

    delete[] visited;
    delete[] graph;
}

int main(){
    INIT();
    INPUT();
    return 0;
}