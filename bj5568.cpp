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

unordered_map<int, bool> um;
int ans = 0;

int appendNum(int a, int b){
    int digit = 0;
    int tmp = b;
    while (tmp > 0){
        digit++;
        tmp /= 10;
    }
    
    return a * pow(10, digit) + b;
}
void dfs(vector<int> v, int num, int cnt, int k, bool* visited){
    if (cnt == k){
        if (um[num]) return;
        um[num] = true;
        ans++;
        return;
    }
    for (int i=0; i<v.size(); i++){
        if (visited[i]) continue;
        int tmp = appendNum(num, v[i]); 
        visited[i] = 1;
        dfs(v, tmp, cnt + 1, k, visited);
        visited[i] = 0;
    }
}
void INPUT(){
    int n; cin >> n;
    int k; cin >> k;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    bool* visited = new bool[n]; fill_n(visited, n, false);
    dfs(v, 0, 0, k, visited);
    cout << ans << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}