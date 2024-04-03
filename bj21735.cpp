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
int ans;
vector<int> snow;
void dfs(int s, int amt, int cnt){
    ans = max(ans, amt);
    if (cnt == m){
        return;
    }
    
    if (s + 1 <= n){
        dfs(s + 1, amt + snow[s + 1], cnt + 1);
    }
    if (s + 2 <= n){
        dfs(s + 2, amt / 2 + snow[s + 2], cnt + 1);
    }
}
void INPUT(){
    cin >> n >> m;
    snow.push_back(0);
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        snow.push_back(tmp);
    }
    ans = 0;
    dfs(0, 0, 0);
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