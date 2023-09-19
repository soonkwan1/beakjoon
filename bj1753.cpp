#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <map>
#include <queue>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void dijkstra(vector<pair<int,int> >* g, int start, int v){
    int* dist = new int[v+1];
    int* visited = new int[v+1];
    for (int i=1; i<=v; i++) dist[i] = 1e9;
    for (int i=1; i<=v; i++) visited[i] = 0;

    dist[start] = 0;
    visited[start] = 1;

    priority_queue<pair<int, int>, vector<pair<int,int> >, greater<pair<int, int> > > dq;
    dq.push(make_pair(0, start));

    while (!dq.empty()){
        int cost = dq.top().first;
        int node = dq.top().second;
        dq.pop();

        for (int i=0; i<g[node].size(); i++){
            int to = g[node][i].first;
            int weight = cost + g[node][i].second;
            if (dist[to] > weight){
                dist[to] = weight;
                dq.push(make_pair(weight, to));
            }
        }
    }

    for (int i=1; i<=v; i++){
        if (dist[i] == 1e9) cout << "INF\n";
        else cout << dist[i] << "\n";
    }

    delete[] visited;
    delete[] dist;
}
void INPUT(){
    int v, e; cin >> v >> e;
    int start; cin >> start;

    vector<pair<int,int> >* graph = new vector<pair<int,int> >[v+1];    
    for (int i=0; i<e; i++){
        int from, to, cost; cin >> from >> to >> cost;
        graph[from].push_back(make_pair(to, cost));
    }

    dijkstra(graph, start, v);

    delete[] graph;
}

int main(){
    INIT();
    INPUT();
    return 0;
}