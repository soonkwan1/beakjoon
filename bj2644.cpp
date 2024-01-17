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
#include <unordered_set>
#define endl "\n"
#define ll long long
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

void bfs(vector<int>* graph, int s, int e, int& ans, int n){
    int* visited = new int[n+1]; fill_n(visited, n+1, 0);
    visited[s] = 1;

    deque<pair<int,int> > dq;
    dq.push_back(make_pair(s, 0));

    while (!dq.empty()){
        int node = dq.front().first;
        int cost = dq.front().second;
        dq.pop_front();

        if (node == e){
            ans = cost;
            break;
        }

        for (int i=0; i<graph[node].size(); i++){
            int to_node = graph[node][i];
            if (visited[to_node]) continue;
            visited[to_node] = 1;
            dq.push_back(make_pair(to_node, cost + 1));
        }
    }
    
    delete[] visited;
}

void INPUT(){
    int n; cin >> n;
    vector<int>* graph = new vector<int>[n+1];
    int s, e; cin >> s >> e;

    int m; cin >> m;
    while (m--){
        int parent, child; cin >> parent >> child;
        graph[child].push_back(parent);
        graph[parent].push_back(child);
    }

    
    int ans = -1;
    bfs(graph, s, e, ans, n);
    cout << ans << endl;
    
    delete[] graph;
}

int main(){
    fastio;
    INPUT();
    return 0;
}