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

void dfs(vector<int> list, int start, int n, int m, vector<int> ans, int* visited, map<int,int> visit, map<int,int> cnt){

    if (ans.size() == m){
        for (int i=0; i<ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i=start; i<list.size(); i++){
        ans.push_back(list[i]);
        dfs(list, i, n, m, ans, visited, visit, cnt);
        ans.pop_back();
    }


}

void INPUT(){
    int n, m; cin >> n >> m;
    vector<int> list;
    map<int, int> visit;
    map<int, int> cnt;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        if (visit[tmp] == 0) list.push_back(tmp);
        visit[tmp]++;
    }
    sort(list.begin(), list.end());

    vector<int> ans;
    int* visited = new int[n];
    fill_n(visited, n, 0);

    dfs(list, 0, n, m, ans, visited, visit, cnt);

    delete[] visited;
}

int main(){
    INIT();
    INPUT();
    return 0;
}