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
    bool operator() (const ll& a, const ll& b) const{
        return a < b;
    }
};  
void INPUT(){
    int n; cin >> n;
    vector<ll> v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end(), compMin());

    ll ans = 0;
    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            ans += abs(v[i] - v[j]);
        }
    }
    cout << ans * 2 << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}