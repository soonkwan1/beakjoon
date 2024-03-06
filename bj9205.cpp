#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#define endl "\n"
#define ll long long
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;


void bfs(vector<int>* graph, int n) {
    deque<int> dq;
    dq.push_front(0);

    bool* visited = new bool[n + 2];
    fill_n(visited, n + 2, false);
    visited[0] = true;

    int ans = 0;
    while (!dq.empty()) {
        int node = dq.front();
        dq.pop_front();

        if (node == n + 1){
            ans = 1;
            break;
        }

        for (int i=0; i<graph[node].size(); i++){
            int to_node = graph[node][i];
            if (!visited[to_node]){
                visited[to_node] = true;
                dq.push_back(to_node);
            }
        }
    }

    if (ans == 1) cout << "happy" << endl;
    else cout << "sad" << endl;

    delete[] visited;
}
void INPUT() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<pair<int, int> > v;
        for (int i = 0; i < n + 2; i++) {
            int s, e; cin >> s >> e;
            v.push_back(make_pair(s, e));
        }

        vector<int>* graph = new vector<int>[n + 2];
        for (int i = 0; i < n + 2; i++) {
            for (int j = 0; j < n + 2; j++) {
                if (i == j) continue;
                if (abs(v[i].first - v[j].first) + abs(v[i].second - v[j].second) <= 1000) {
                    graph[i].push_back(j);
                }
            }
        }

        bfs(graph, n);

        delete[] graph;
    }
}


int main() {
    fastio;
    INPUT();
    return 0;
}
