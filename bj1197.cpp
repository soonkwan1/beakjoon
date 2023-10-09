#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void cycleCheck(vector<int>* graph, bool* visited, int curr, int prev, bool* result){
    visited[curr] = true;

    for (int i=0; i<graph[curr].size(); i++){
        int to_node = graph[curr][i];

        if (visited[to_node]){
            if (to_node != prev) {
                *result = true;
                return;
            }
            else{
                continue;
            }
        }

        cycleCheck(graph, visited, to_node, curr, result);
        if (*result == true){
            return;
        }
    }
}
int findParent(int x, int* parents){
    if (x == parents[x]){
        return x;
    }
    else{
        return parents[x] = findParent(parents[x], parents);
    }
}
void Union(int x, int y, int* parents){
    int a = findParent(x, parents);
    int b = findParent(y, parents);

    if (a != b){
        parents[b] = a;
    }
}
bool isValid(int x, int y, int* parents){
    int a = findParent(x, parents);
    int b = findParent(y, parents);

    if (a != b){
        return true;
    }
    else{
        return false;
    }
}
void INPUT(){
    int v, e; cin >> v >> e;
    priority_queue<pair<int, pair<int,int> >, vector<pair<int, pair<int,int> > >, greater<pair<int, pair<int,int> > > > edges;
    for (int i=0; i<e; i++){
        int start, end, cost; cin >> start >> end >> cost;
        edges.push(make_pair(cost, make_pair(start, end)));
    }

    // int cnt = 0;
    // int ans = 0;

    // vector<int>* graph = new vector<int>[v+1];
    // bool* visited = new bool[v+1]; 
    // map<int,int> list;

    int* parents = new int[v+1];
    for (int i=1; i<=v; i++) parents[i] = i;

    int ans = 0;
    for (int i=0; i<e; i++){
        int cost = edges.top().first;
        int start = edges.top().second.first;
        int end = edges.top().second.second;
        edges.pop();

        if (isValid(start, end, parents)){
            Union(start, end, parents);
            ans += cost;
        }

    }

    cout << ans << endl;

    delete[] parents;
    // delete[] graph;
}

int main(){
    INIT();
    INPUT();
    return 0;
}