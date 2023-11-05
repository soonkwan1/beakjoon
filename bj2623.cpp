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
void topologySort(vector<int>* graph, int* indegree, int n){
    queue<int> q;
    for (int i=1; i<=n; i++){
        if (indegree[i] == 0) q.push(i);
    }

    vector<int> ans;
    while (!q.empty()){
        int node = q.front();
        ans.push_back(node);
        q.pop();

        for (int i=0; i<graph[node].size(); i++){
            int to_node = graph[node][i];
            if (--indegree[to_node] == 0) q.push(to_node);
        }
    }

    if (ans.size() != n) cout << 0 << endl;
    else{
        for (int i=0; i<ans.size(); i++){
            cout << ans[i] << endl;
        }
    }
}
void INPUT(){
    int n, m; cin >> n >> m;
    int* indegree = new int[n+1]; fill_n(indegree, n+1, 0);
    vector<int>* graph = new vector<int>[n+1];

    for (int i=0; i<m; i++){
        int cnt; cin >> cnt;
        int prev; cin >> prev;
        cnt--;
        while(cnt--){
            int curr; cin >> curr;
            graph[prev].push_back(curr);
            indegree[curr]++;
            prev = curr;
        }
    }
    topologySort(graph, indegree, n);
    // for (int i=1; i<=n; i++) cout << indegree[i] << " ";
    // cout << endl;
    // for (int i=1; i<=n; i++){
    //     cout << i << ": ";
    //     for (int j=0; j<graph[i].size(); j++){
    //         cout << graph[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    delete[] graph;
    delete[] indegree;
}

int main(){
    INIT();
    INPUT();
    return 0;
}