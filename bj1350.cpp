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
    ll n; cin >> n;
    vector<ll> v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    ll cluster; cin >> cluster;

    ll ans = 0;
    for (int i=0; i<n; i++){
        if (v[i] % cluster == 0) {
            ans += (v[i] / cluster) * cluster;
        }
        else{
            ans += (v[i] / cluster + 1) * cluster;
        }
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