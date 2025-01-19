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

struct compMax{
    bool operator() (const int& a, const int& b) const{
        return a > b;
    }
};
void INPUT(){
    int n; cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end(), compMax());

    ll ans = 0;
    // three sets
    for (int i=0; i<v.size() / 3 * 3; i++){
        if (i % 3 != 2) ans += v[i];
    }

    // rest
    if (v.size() % 3 == 1){
        ans += v[v.size() - 1];
    }
    else if (v.size() % 3 == 2){
        ans += v[v.size() - 1] + v[v.size() - 2];
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