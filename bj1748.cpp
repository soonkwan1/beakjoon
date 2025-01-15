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
    vector<ll> v;

    for (ll i=1; i<11; i++){
        v.push_back(9 * pow(10, i-1) * i);
    }

    ll digit = 1;
    ll idx = 0;
    ll ans = 0;

    while (n >= digit){
        ans += v[idx];
        idx++;
        digit *= 10;
    }
    ans -= (digit - n - 1) * (idx);
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