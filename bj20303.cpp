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

struct Data{
    int weight;
    int value;
};
void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
struct compMin{
    bool operator() (const Data& a, const Data& b) const{
        if (a.weight != b.weight){
            return a.weight < b.weight;
        }
        return a.value < b.value;
    }
};
Data bfs(vector<int>* graph, int start, int* visited, int* candy){
    deque<int> dq;
    dq.push_back(start);
    visited[start] = 1;

    int ret = 0;
    int cnt = 0;
    while (!dq.empty()){
        int node = dq.front();
        ret += candy[node];
        cnt++;
        dq.pop_front();

        for (int i=0; i<graph[node].size(); i++){
            int to_node = graph[node][i];
            if (!visited[to_node]){
                visited[to_node] = 1;
                dq.push_back(to_node);
            }
        }
    }
    Data d = {cnt, ret};
    return d;
}
void printDp(int** dp, int k, int n){
    for (int i=0; i<k; i++){
        for (int j=0; j<n; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}
void INPUT(){
    int n, m, k; cin >> n >> m >> k;
    int* candy = new int[n+1]; candy[0] = 0;
    for (int i=1; i<=n; i++) cin >> candy[i];

    vector<int>* graph = new vector<int>[n+1];
    for (int i=0; i<m; i++){
        int start, end; cin >> start >> end;
        graph[start].push_back(end);
        graph[end].push_back(start);
    }

    int* visited = new int[n+1]; fill_n(visited, n+1, 0);
    vector<Data> ans; Data d = {0,0}; ans.push_back(d);
    for (int i=1; i<=n; i++){
        if (visited[i]) continue;
        ans.push_back(bfs(graph, i, visited, candy));
    }
    sort(ans.begin(), ans.end(), compMin());

    int item_size = ans.size();
    int** dp = new int*[k];
    for (int i=0; i<k; i++) dp[i] = new int[item_size], fill_n(dp[i], item_size, 0);
    
    for (int i=1; i<k; i++){
        for (int j=1; j<item_size; j++){
            if (i < ans[j].weight){
                dp[i][j] = dp[i][j-1];
            }
            else{
                dp[i][j] = max(dp[i-ans[j].weight][j-1] + ans[j].value, dp[i][j-1]);
            }
        }
    }

    // printDp(dp, k, item_size);
    cout << dp[k-1][item_size-1] << endl;

    for (int i=0; i<k; i++) delete[] dp[i];
    delete[] dp;
    delete[] visited;
    delete[] graph;
    delete[] candy;
}

int main(){
    INIT();
    INPUT();
    return 0;
}