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


bool dfs(vector<int>& ans, vector<int> v, int idx, int total){
    if (ans.size() == 7){
        int tmp = 0;
        for (int i=0; i<7; i++) tmp += ans[i];

        if (total == 100) return true;
        return false;
    }

    for (int i=idx; i<9; i++){
        ans.push_back(v[i]);
        if (dfs(ans, v, i+1, total + v[i])) return true;
        ans.pop_back();
    }
    return false;
}
void INPUT(){
    vector<int> v(9);
    for (int i=0; i<9; i++) cin >> v[i];

    vector<int> ans;
    dfs(ans, v, 0, 0);
    for (int i=0; i<7; i++) cout << ans[i] << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}