#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#define ll long long
#define INF 98765432101
#define endl "\n"
using namespace std;

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
vector<int> topologySort(vector<int>* graph, int* indegree, int* node_val, int v, int dest) {
    queue<int> q;
    int* dist = new int[v + 1]; fill_n(dist, v + 1, 0);

    for (int i = 1; i <= v; i++) {
        if (indegree[i] == 0) {
            q.push(i);
            dist[i] = node_val[i];
        }
    }

    vector<int> ans;
    while (!q.empty()) {
        int node = q.front();
        ans.push_back(node);
        q.pop();

        for (int i = 0; i < graph[node].size(); i++) {
            int to_node = graph[node][i];
            dist[to_node] = max(dist[to_node], dist[node] + node_val[to_node]);
            if (--indegree[graph[node][i]] == 0) q.push(graph[node][i]);
        }
    }
    
    cout << dist[dest] << endl;

    delete[] dist;
    return ans;
}
void INPUT() {
    int t; cin >> t;
    while (t--) {
        int v, e; cin >> v >> e;
        int dest;

        int* node_val = new int[v + 1]; node_val[0] = 0;
        int* indegree = new int[v + 1]; fill_n(indegree, v + 1, 0);
        for (int i = 1; i <= v; i++) cin >> node_val[i];
        
        vector<int>* graph = new vector<int>[v + 1];
        for (int i = 0; i < e; i++) {
            int start, end; cin >> start >> end;
            graph[start].push_back(end);
            indegree[end]++;
        }
        cin >> dest;

        vector<int> seq = topologySort(graph, indegree, node_val, v, dest);
        
        // free memory
        delete[] node_val;
        delete[] indegree;
        delete[] graph;
    }
}

int main() {
    INIT();
    INPUT();
    return 0;
}

// 1, 2, 3, 4, 5, ...
// y-1, y+1 로 도착
