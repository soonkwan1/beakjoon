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

struct compMin{
    bool operator() (const int& a, const int& b){
        return a > b;
    }
};
void dfs(string num, vector<string> sub, int n, int& ans){
    int tmp = stoi(num);
    if (tmp > n) return;
    ans = max(ans, tmp);

    for (int i=0; i<sub.size(); i++){
        dfs(num + sub[i], sub, n, ans);
    }
}
void INPUT(){
    int n, k; cin >> n >> k;
    vector<string> sub(k);
    for (int i=0; i<k; i++) cin >> sub[i];

    int ans = -1;
    for (int i=0; i<sub.size(); i++){
        dfs(sub[i], sub, n, ans);
    }
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