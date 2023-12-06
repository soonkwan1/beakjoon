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

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
/*
void INPUT(){
    vector<pair<ll,ll> > m;
    int n; cin >> n;

    if (n == 1){
        cout << 0 << endl;
        return;
    }

    for (int i=0; i<n; i++){
        ll r, c; cin >> r >> c;
        m.push_back(make_pair(r, c));
    }

    ll ans = 0;
    while (m.size() > 2){
        ll idx; ll mx = -1;
        for (int i=1; i<m.size(); i++){
            if (m[i].first > mx){
                idx = i;
                mx = m[i].first;
            }
        }

        ll a1 = m[idx-1].first;
        ans += m[idx-1].first * m[idx].first * m[idx].second;
        m[idx].first = m[idx-1].first;

        m.erase(m.begin() + idx - 1);
    }

    ans += m[0].first * m[1].first * m[1].second;

    cout << ans << endl;
}
*/

void INPUT(){
    int n; cin >> n;
    vector<pair<ll, ll> > m;
    for (int i=0; i<n; i++){
        ll a, b; cin >> a >> b;
        m.push_back(make_pair(a,b));
    }

    ll** dp = new ll*[n];
    for (int i=0; i<n; i++) {
        dp[i] = new ll[n];
        fill_n(dp[i], n, 0);
    }

    for (int i=1; i<n; i++){
        for (int j=0; i + j < n; j++){
            // if (i == 1){
            //     dp[j][j+i] = m[j].first * m[i+j].first * m[i+j].second;
            // }
            // else if (i==2){
            //     dp[j][j+i] = min(dp[j][j+i-1] + m[j].first * m[j+i].first * m[j+i].second
            //     , dp[j+1][j+i] + m[j].first * m[j].second * m[j+i].second);
            // }
            // else{
                
            // }
            dp[j][j+i] = int(1e9);

            for (int k=j; k<j+i; k++){
                dp[j][j+i] = min(dp[j][j+i], 
                dp[j][k] + dp[k+1][j+i] + m[j].first * m[k].second * m[j+i].second);
            }
        }
    }

    // for (int i=0; i<n; i++){
    //     for (int j=0; j<n; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << dp[0][n-1] << endl;

    for (int i=0; i<n; i++) delete[] dp[i];
    delete[] dp;

}

int main(){
    INIT();
    INPUT();
    return 0;
}