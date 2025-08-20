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
    int first, second; cin >> first >> second;
    int prev_x = first; int prev_y = second;
    int ans = 0;
    for (int i=1; i<n; i++){
        int t1, t2; cin >> t1 >> t2;
        ans += abs(t1 - prev_x) + abs(t2 - prev_y);
        prev_x = t1; prev_y = t2;
    }
    ans += abs(first - prev_x) + abs(second - prev_y);

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