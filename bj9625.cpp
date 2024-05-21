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
    int n; cin >> n;
    ll dp1[46], dp2[46]; fill_n(dp1, 46, 0), fill_n(dp2, 46, 0);

    dp1[0] = 1, dp1[1] = 0, dp1[2] = 1;
    dp2[0] = 0, dp2[1] = 1, dp2[2] = 1;

    for (int i=3; i<=45; i++){
        dp1[i] = dp1[i-1] + dp1[i-2];
        dp2[i] = dp2[i-1] + dp2[i-2];
    }

    cout << dp1[n] << " " << dp2[n] << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}