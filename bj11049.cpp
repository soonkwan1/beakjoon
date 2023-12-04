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

int main(){
    INIT();
    INPUT();
    return 0;
}