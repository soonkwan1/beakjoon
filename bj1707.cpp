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

int bfs(vector<int>* graph, int* visited, int v){
    visited[v] = 1;
    deque<int> dq;
    dq.push_back(v);

    while(!dq.empty()){
        int node = dq.front();
        dq.pop_front();

        for (int i=0; i<graph[node].size(); i++){
            int to_node = graph[node][i];
            if (!visited[to_node]){
                if (visited[node] == 1){
                    visited[to_node] = 2;
                }
                else{
                    visited[to_node] = 1;
                }
                dq.push_back(to_node);
            }
            else if (visited[node] == visited[to_node]){
                return 100;
            }
        }
    }
    return 1;
}
void INPUT(){
    int t; cin >> t;
    while (t--){
        int v, e; cin >> v >> e;
        vector<int>* graph = new vector<int>[v+1];
        for (int i=0; i<e; i++){
            int start, end; cin >> start >> end;
            graph[start].push_back(end);
            graph[end].push_back(start);
        }

        int* visited = new int[v+1]; fill_n(visited, v+1, false);
        int result = 1;
        for (int i=1; i<=v; i++){
            if (!visited[i]) {
                result = bfs(graph, visited, i);
                if (result == 100) break;
            }
        }

        if (result == 100) cout << "NO" << endl;
        else cout << "YES" << endl;


        delete[] visited;
        delete[] graph;
    }
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}