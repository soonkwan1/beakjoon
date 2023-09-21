#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void dijkstra(vector<pair<int,int> >* graph, int n, int start, int end){
    int* visited = new int[n+1];
    fill_n(visited, n+1, 1e9);
    visited[start] = 0;
    int* route = new int[n+1];
    
    priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > nodes;
    nodes.push(make_pair(0, start));

    while (!nodes.empty()){
        int cost = nodes.top().first;
        int node = nodes.top().second;
        nodes.pop();

        if (cost > visited[node]){
            continue;
        }

        for (int i=0; i<graph[node].size(); i++){
            int to_node = graph[node][i].first;
            int weight = graph[node][i].second + cost;

            if (weight < visited[to_node]){
                visited[to_node] = weight;
                route[to_node] = node;
                nodes.push(make_pair(weight, to_node));
            }
        }
    }

    cout << visited[end] << "\n";
    route[start] = 0;
    deque<int> answer;
    int node = end;
    while (node){
        answer.push_front(node);
        node = route[node];
    }
    cout << answer.size() << "\n";
    for (int i=0; i<answer.size(); i++) cout << answer[i] << " ";
    cout << "\n";
    delete[] visited;
    delete[] route;
}
void INPUT(){
    int n, m; cin >> n >> m;
    vector<pair<int,int> >* graph = new vector<pair<int,int> >[n+1];

    for (int i=0; i<m; i++){
        int s, e, c; cin >> s >> e >> c;
        graph[s].push_back(make_pair(e, c));
    }
    int start, end; cin >> start >> end;
    dijkstra(graph, n, start, end);

    delete[] graph;
}

int main(){
    INIT();
    INPUT();
    return 0;
}