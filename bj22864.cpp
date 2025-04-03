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
    int a, b, c, m; cin >> a >> b >> c >> m;
    int total = 24;
    int stat = 0;
    int ans = 0;
    while (total --){
        if (stat + a > m){
            stat = stat - c < 0 ? 0 : stat - c;
        }
        else{
            stat += a;
            ans += b;
        }
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