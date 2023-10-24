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
void topologySort(vector<int>* graph, int* indegree, int n) {
    queue<int> q;
    for (int i = 1; i <= n; i++) if (indegree[i] == 0) q.push(i);

    while (!q.empty()) {
        int node = q.front();
        cout << node << " ";
        q.pop();

        for (int i = 0; i < graph[node].size(); i++) {
            int to_node = graph[node][i];
            if (--indegree[to_node] == 0) q.push(to_node);
        }
    }
    cout << endl;
}
void INPUT() {
    int n, m; cin >> n >> m;
    int* indegree = new int[n + 1]; fill_n(indegree, n + 1, 0);
    vector<int>* graph = new vector<int>[n + 1];

    for (int i = 0; i < m; i++) {
        int start, end; cin >> start >> end;
        graph[start].push_back(end);
        indegree[end]++;
    }

    topologySort(graph, indegree, n);

    delete[] indegree; 
    delete[] graph;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
