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

void dfs(int node, bool* visited, vector<int>* graph, int& ans){
    if (visited[node]){
        ans++;
        return;
    }

    for (int i=0; i<graph[node].size(); i++){
        visited[node] = true;
        dfs(graph[node][i], visited, graph, ans);
    }
}
void INPUT(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> v(n);
        for (int i=0; i<n; i++) cin >> v[i];

        vector<int>* graph = new vector<int>[n+1];

        for (int i=1; i<=n; i++){
            graph[i].push_back(v[i-1]);
        }

        bool* visited = new bool[n+1]; fill_n(visited, n+1, false);
        int ans = 0;
        for (int i=1; i<=n; i++){
            if (!visited[i]){
                dfs(i, visited, graph, ans);
            }
        }

        cout << ans << endl;

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