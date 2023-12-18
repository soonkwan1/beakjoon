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
#define fse(A,B,C) for (int i=A; i<B; i+=C)
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void bfs(int start, int end, vector<pair<int,int> >* graph, int n){
    deque<pair<int,int> > dq;
    dq.push_back(make_pair(start, 0));
    bool* visited = new bool[n+1]; fill_n(visited, n+1, false);
    visited[start] = true;

    while (!dq.empty()){
        int node = dq.front().first;
        int cost = dq.front().second;
        dq.pop_front();

        if (node == end){
            delete[] visited;
            cout << cost << endl;
            return;
        }

        for (int i=0; i<graph[node].size(); i++){
            int to_node = graph[node][i].first;
            int weight = graph[node][i].second;
            if (!visited[to_node]){
                visited[to_node] = true;
                dq.push_back(make_pair(to_node, cost + weight));
            }
        }
    }
}
void INPUT(){
    int n, m; cin >> n >> m;
    vector<pair<int,int> >* graph = new vector<pair<int,int> >[n+1];
    for (int i=0; i<n-1; i++){
        int s, e, c; cin >> s >> e >> c;
        graph[s].push_back(make_pair(e, c));
        graph[e].push_back(make_pair(s, c));
    }

    // int** dp = new int*[n+1];
    // for (int i=0; i<=n; i++){
    //     dp[i] = new int[n+1];
    //     fill_n(dp[i], n+1, 0);
    // }
    for (int i=0; i<m; i++){
        int start, end; cin >> start >> end;
        bfs(start, end, graph, n);
    }

    // for (int i=0; i<n; i++) delete[] dp[i];
    // delete[] dp;
    delete[] graph;
}

int main(){
    INIT();
    INPUT();
    return 0;
}