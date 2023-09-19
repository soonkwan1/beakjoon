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

void dfs(vector<int>* g, bool* visited, int start){
    visited[start] = true;
    cout << start << " ";

    for (int i=0; i<g[start].size(); i++){
        if (!visited[g[start][i]]){
            dfs(g, visited, g[start][i]);
        }
    }
}

void bfs(vector<int>* g, bool* visited, int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;

    int node;
    while (!q.empty()){
        node = q.front();
        cout << node << " ";
        
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
    int n, e, s;
    cin >> n >> e >> s;

    vector<int>* graph = new vector<int>[n+1];
    bool* visited = new bool[n+1];
    for (int i=0; i<n+1; i++){
        visited[i] = false;
    }

    int node1, node2;
    for (int i=0; i<e; i++){
        cin >> node1 >> node2;
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);
    }
    for (int i=1; i<=n; i++){
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(graph, visited, s);
    cout << endl;

    for (int i=0; i<n+1; i++){
        visited[i] = false;
    }
    bfs(graph, visited, s);
    cout << endl;


    delete[] graph;
}

int main(){
    INIT();
    INPUT();
    return 0;
}