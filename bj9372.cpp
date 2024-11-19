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

void bfs(vector<int>* v, int n, int m){
    deque<int> dq;
    bool* visited = new bool[n+1];
    fill_n(visited, n+1, false);

    dq.push_back(1);
    visited[1] = true;

    int ans = 0;
    while (!dq.empty()){
        int curr = dq.front();
        dq.pop_front();

        for (int i=0; i<v[curr].size(); i++){
            int newcurr = v[curr][i];
            if (!visited[newcurr]){
                visited[newcurr] = true;
                dq.push_back(newcurr);
                ans++;
            }
        }
    }

    delete[] visited;
}

void INPUT(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector<int>* v = new vector<int>[n+1];
        for (int i=0; i<m; i++){
            int a, b; cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }

        cout << n-1 << endl;


        delete[] v;
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