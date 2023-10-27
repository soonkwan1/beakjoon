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
#define fse(A,B,C) for (ll i=A; i<B; i+=C)
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
ll lessThan(ll k, ll n){
    ll cnt = 0;
    fse(1, n+1, 1) {
        ll tmp = k / i;
        if (tmp == 0) break;
        cnt += min(n, k / i);
    }
    return cnt;
}
void INPUT(){
    ll n, k; cin >> n >> k;
    ll cnt = 0;

    ll left = 1; ll right = k;
    ll ans = 0;
    while (left <= right){
        ll mid = (left + right) / 2;
        ll tmp = lessThan(mid, n);
        // cout << mid << " " << tmp << endl;

        if (tmp < k){
            left = mid + 1;
        }
        else{
            ans = mid;
            right = mid - 1;
        }
    }

    cout << ans << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}