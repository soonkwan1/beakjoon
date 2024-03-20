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
#define MOD 1000000007

int n, k;
void INPUT(){
    cin >> n >> k;
}
void SOLUTION(){
    // ll* num = new ll[4000001];
    // fill_n(num, 4000001, 0);
    // num[0] = num[1] = 1;
    // for (int i=2; i<=4000000; i++){
    //     num[i] = (num[i-1] % MOD * i % MOD) % MOD;
    // }
    // cout << (num[n] / num[k]) / num[n - k] << endl;

    deque<ll> v;
    for (int i=k+1; i<=n; i++){
        v.push_back(i);
    }
    for (int i=2; i<=n-k; i++){
        for (int j=0; j<v.size(); j++){
            if (v[j] % i == 0){
                v[j] = v[j] / i == 0 ? 1 : v[j] / i;
            }
        }
    }

    ll ans = 1;
    for (int i=0; i<v.size(); i++){
        if (v[i] == 0) continue;
        ans = (ans % MOD * v[i] % MOD) % MOD;
    }
    cout << ans << endl;
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}