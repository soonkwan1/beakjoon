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

void INPUT(){
    int a, b; cin >> a >> b;
    int m; cin >> m;

    vector<int> v(m);
    for (int i=0; i<m; i++) cin >> v[i];
    
    ll start = 1;
    ll total = 0;
    for (int i=v.size()-1; i>=0; i--){
        total += v[i] * start;
        start *= a;
    }
    
    vector<int> ans;
    while (total != 0){
        ans.push_back(total % b);
        total /= b;
    }
    
    for (int i=ans.size() - 1; i>=0; i--){
        cout << ans[i] << " ";
    }
    cout << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}