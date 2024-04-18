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

int n, m;
void dfs(int k, vector<int> v, bool* visited){
    if (v.size() == m){
        for (int i=0; i<v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i=1; i<=n; i++){
        if (i == k) continue;
        if (visited[i]) continue;
        v.push_back(i);
        visited[i] = true;
        dfs(i, v, visited);
        v.pop_back();
        visited[i] = false;
    }
}
void INPUT(){
    cin >> n >> m;
    
    vector<int> v;
    bool* visited = new bool[n+1];
    fill_n(visited, n+1, false);
    for (int i=1; i<=n; i++){
        v.push_back(i);
        visited[i] = true;
        dfs(i, v, visited);
        v.pop_back();
        visited[i] = false;
    }
    delete[] visited;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}