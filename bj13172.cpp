#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
#define ll long long
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
ll gcd(ll a, ll b){
    while (b){
        ll tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
ll power(ll a, ll m, ll mod){
    if (m == 1) return a;

    if (m % 2 == 0){
        ll t = power(a, m/2, mod);
        return t * t % mod;
    }
    else{
        return a * power(a, m-1, mod) % mod;
    }
}
void INPUT(){
    int n; cin >> n;
    ll mod = 1000000007;
    ll res = 0;
    while (n--){
        ll a, b; cin >> a >> b;
        ll d = gcd(a,b);
        a /= d;
        b /= d;
        
        res += b * power(a, mod-2, mod) % mod;
        res %= mod;
    }
    cout << res << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}