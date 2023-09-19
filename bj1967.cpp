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

pair<int,int> bfs(vector<pair<int,int> >* tree, int start, int n){
    deque<pair<int,int> > nodes;
    nodes.push_back(make_pair(start, 0));

    int* dist = new int[n+1];
    dist[start] = 0;
    fill_n(dist, n+1, -1);

    while (!nodes.empty()){
        int node = nodes.front().first;
        int cost = nodes.front().second;
        nodes.pop_front();

        for (int i=0; i<tree[node].size(); i++){
            if (dist[tree[node][i].first] != -1) continue;
            dist[tree[node][i].first] = cost + tree[node][i].second;
            nodes.push_back(make_pair(tree[node][i].first, tree[node][i].second + cost));
        }

    }

    int res = -1;
    int idx = -1;
    for (int i=1; i<=n; i++){
        if (dist[i] > res){
            res = dist[i];
            idx = i;
        }
    }
    
    delete[] dist;
    return make_pair(res, idx);
}
pair<int,int> findIdx(int* visited, int n){
    int res = -1;
    int idx;
    for (int i=1; i<=n; i++){
        if (res < visited[i]){
            res = visited[i];
            idx = i;
        }
    }
    return make_pair(res, idx);
}
void dfs(vector<pair<int,int> >* tree, int start, int cost, int n, int* visited){
    for (int i=0; i<tree[start].size(); i++){
        if (visited[tree[start][i].first] == -1){
            visited[tree[start][i].first] = cost + tree[start][i].second;
            dfs(tree, tree[start][i].first, cost + tree[start][i].second, n, visited);
        }
    }
}
void INPUT(){
    int n; cin >> n;
    vector<pair<int,int> >* tree = new vector<pair<int,int> >[n+1];

    for (int i=0; i<n-1; i++){
        int parent, child, cost; cin >> parent >> child >> cost;
        tree[parent].push_back(make_pair(child, cost));
        tree[child].push_back(make_pair(parent, cost));
    }

    int* visited = new int[n+1]; 

    fill_n(visited, n+1, -1); visited[1] = 0;
    dfs(tree, 1, 0, n, visited); 
    pair<int,int> first = findIdx(visited, n);
    
    fill_n(visited, n+1, -1); visited[first.second] = 0;
    dfs(tree, first.second, 0, n, visited);
    pair<int,int> answer = findIdx(visited, n);

    cout << answer.first << "\n";

    delete[] visited;
    delete[] tree;
}

int main(){
    INIT();
    INPUT();
    return 0;
}