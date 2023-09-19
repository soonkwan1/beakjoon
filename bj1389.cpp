#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <queue>
#include <deque>
using namespace std;

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

int bfs(vector<int>* g, int start, int size){
    bool* visited = new bool[size+1];
    for (int i=0; i<=size; i++){
        visited[i] = false;
    }

    int depth = 1;
    queue<int> q;
    queue<int> cost;
    q.push(start);
    cost.push(0);
    visited[start] = true;

    int ans = 0;
    while (!q.empty()){
        int node = q.front();
        int tmp = cost.front();
        q.pop();
        cost.pop();
        ans += tmp;

        for (int i=0; i<g[node].size(); i++){
            if (!visited[g[node][i]]){
                q.push(g[node][i]);
                cost.push(tmp+1);
                visited[g[node][i]] = true;
            }
        }
    }

    delete[] visited;
    return ans;
}

void INPUT() {
    int n, m;
    cin >> n >> m;
    vector<int>* graph = new vector<int>[n+1];

    int from, to;
    for (int i=0; i<m; i++){
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    int res = int(1e9);
    int ans;
    for (int i=1; i<=n; i++){
        int tmp = bfs(graph, i, n);
        if (tmp < res){
            res = tmp;
            ans = i;
        }
    }

    cout << ans << "\n";

    delete[] graph;
}   

int main(){
    INIT();
    INPUT();
    return 0;
}


/*
5 5
1 3
1 4
4 5
4 3
3 2
*/