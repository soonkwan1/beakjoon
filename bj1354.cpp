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

ll getInf(unordered_map<ll,ll>& um, ll n, ll p, ll q, ll x, ll y){
    if (um[n]) return um[n];
    else{
        ll t1 = n / p - x <= 0 ? 0 : n / p - x;
        ll t2 = n / q - y <= 0 ? 0 : n / q - y;
        um[t1] = getInf(um, t1, p, q, x, y);
        um[t2] = getInf(um, t2, p, q, x, y);
        return um[t1] + um[t2];
    }
}

void INPUT(){
    ll n, p, q, x, y; cin >> n >> p >> q >> x >> y;

    unordered_map<ll, ll> um;
    um[0] = 1;
    cout << getInf(um, n, p, q, x, y) << endl;

}

int main(){
    fastio;
    INPUT();
    return 0;
}