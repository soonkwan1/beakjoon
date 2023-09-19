#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void dfs(vector<int> list, int n, int m, vector<int> ans, int* visited){

    if (ans.size() == m){
        for (int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i=0; i<list.size(); i++){
        if (visited[i]) continue;
        ans.push_back(list[i]);
        visited[i] = 1;
        dfs(list, n, m, ans, visited);
        ans.pop_back();
        visited[i] = 0;
    }
}

void INPUT(){
    int n, m; cin >> n >> m;
    vector<int> list;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        list.push_back(tmp);
    }
    sort(list.begin(), list.end());
    
    vector<int> ans;
    int* visited = new int[n];
    fill_n(visited, n, 0);

    dfs(list, n, m, ans, visited);

    delete[] visited;
}

int main(){
    INIT();
    INPUT();
    return 0;
}