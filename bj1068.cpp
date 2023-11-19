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

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void dfs(vector<int>* graph, int node, int del_node, int& ans) {

    if (graph[node].size() == 0) {
        ans++;
        return;
    }

    for (int i = 0; i < graph[node].size(); i++) {
        int to_node = graph[node][i];

        if (del_node == to_node) {
            if (graph[node].size() == 1) ans++;
            continue;
        }
        dfs(graph, to_node, del_node, ans);
    }
}
void INPUT() {
    int n; cin >> n;
    vector<int>* graph = new vector<int>[n];
    int root;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        if (tmp == -1) {
            root = i;
            continue;
        }

        graph[tmp].push_back(i);
    }
    int del_node; cin >> del_node;
    
    int ans = 0;
    if (root != del_node) dfs(graph, root, del_node, ans);
    cout << ans << endl;

    delete[] graph;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
