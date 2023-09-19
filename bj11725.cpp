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

void dfs(vector<int>* tree, int start, int* visited){
    
    for (int i=0; i<tree[start].size(); i++){
        if (visited[tree[start][i]]) continue;
        visited[tree[start][i]] = start;
        dfs(tree, tree[start][i], visited);
    }
}

void INPUT(){
    int n; cin >> n;
    vector<int>* tree = new vector<int>[n+1];

    for (int i=0; i<n-1; i++){
        int start, end; cin >> start >> end;
        tree[start].push_back(end);
        tree[end].push_back(start);
    }

    int* visited = new int[n+1];
    fill_n(visited, n+1, 0);

    visited[1] = 1;
    dfs(tree, 1, visited);

    for (int i=2; i<=n; i++){
        cout << visited[i] << "\n";
    }

    delete[] visited;
    delete[] tree;
}

int main(){
    INIT();
    INPUT();
    return 0;
}