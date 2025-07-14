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

int n, ans;
void dfs(bool* visited, vector<int> v, vector<int>& arr){
    if (arr.size() == n){
        int tmp = 0;
        for (int i=1; i<arr.size(); i++){
            tmp += abs(arr[i] - arr[i-1]);
        }
        ans = max(ans, tmp);
        return;
    }

    for (int i=0; i<n; i++){
        if (visited[i]) continue;

        visited[i] = true;
        arr.push_back(v[i]);
        dfs(visited, v, arr);
        arr.pop_back();
        visited[i] = false;
    }
}

void INPUT(){
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    
    bool* visited = new bool[n];
    vector<int> arr;
    ans = 0;
    dfs(visited, v, arr);
    cout << ans << endl;

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