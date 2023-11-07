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

void cycleCheck(int* p, int* done, int* visited, int curr, int& cnt){
    visited[curr] = 1;
    int to_node = p[curr];

    if (!visited[to_node]){
        cycleCheck(p, done, visited, to_node, cnt);
    }
    else if (!done[to_node]){
        for (int i=to_node; i != curr; i = p[i]){
            cnt--;
        }
        cnt--;
    }
    done[curr] = 1;
}

void INPUT(){
    int t; cin >> t;
    vector<int> ans;
    while(t--){
        int n; cin >> n;
        int* graph = new int[n+1]; for (int i=1; i<=n; i++) cin >> graph[i];
        int* team = new int[n+1]; fill_n(team, n+1, 0);
        
        int cnt = n;
        int* visited = new int[n+1]; fill_n(visited, n+1, 0);
        for (int i=1; i<=n; i++){
            if (!visited[i]){
                cycleCheck(graph, team, visited, i, cnt);
            }
        }

        ans.push_back(cnt);

        delete[] visited;
        delete[] graph;
        delete[] team;
    }

    for (int i=0; i<ans.size(); i++) cout << ans[i] << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}