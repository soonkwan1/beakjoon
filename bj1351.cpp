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
using namespace std;
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);

ll infNum(unordered_map<ll, ll>& um, ll n, int p, int q){
    if (um[n]) {
        return um[n];
    }
    else{
        um[n / p] = infNum(um, n / p, p, q);
        um[n / q] = infNum(um, n / q, p, q);
        return um[n / p] + um[n / q];
    }
}

void INPUT(){
    ll n, p, q; cin >> n >> p >> q;
    unordered_map<ll, ll> um;
    um[0] = 1;

    cout << infNum(um, n, p, q) << endl;

}

int main(){
    fastio;
    INPUT();
    return 0;
}