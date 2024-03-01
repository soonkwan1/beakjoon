#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <unordered_set>
#include <unordered_map>
#define ll long long
#define INF 98765432101
#define endl "\n"
using namespace std;
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);

int n, m;
int ans = 0;
vector<int>* graph;

void getGraph() {
    graph = new vector<int>[n];
}
void delGraph() {
    delete[] graph;
}
void dfs(int node, bool* visited, int depth) {
    if (depth == 4) {
        ans = 1;
        return;
    }

    for (int i = 0; i < graph[node].size(); i++) {
        if (!visited[graph[node][i]]) {
            visited[node] = true;
            dfs(graph[node][i], visited, depth + 1);
            visited[node] = false;
        }
    }
}
void INPUT() {
    cin >> n >> m;
    getGraph();
    for (int i = 0; i < m; i++) {
        int s, e; cin >> s >> e;
        graph[s].push_back(e);
        graph[e].push_back(s);
    }

    bool* visited = new bool[n];
    for (int i = 0; i < n; i++) {
        fill_n(visited, n, false);
        visited[i] = true;
        dfs(i, visited, 0);
        if (ans) break;
    }


    cout << ans << endl;

    delete[] visited;
    delGraph();
}

int main() {
    fastio;
    INPUT();
    return 0;
}
