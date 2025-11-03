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
    int t; cin >> t;
    while (t--){
        int l, r, s; cin >> l >> r >> s;
        int ans = 1;
        int ld = abs(l - s); int rd = abs(r - s);

        if (ld == rd) ans += ld * 2 - 1;
        else if (ld < rd) ans += ld * 2;        
        else ans += rd * 2 - 1;
        
        cout << ans << endl;
    }
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}