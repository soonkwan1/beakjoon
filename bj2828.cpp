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
    int n, m; cin >> n >> m;
    int j; cin >> j;

    int left = 1, right = m;
    int ans = 0;
    for (int i=0; i<j; i++){
        int pos; cin >> pos;
        // no move
        if (pos >= left && pos <= right) continue;

        int aleft = abs(pos - left);
        int aright = abs(pos - right);

        if (aleft < aright){
            left = pos, right = pos + m - 1;
            ans += aleft;
        }
        else if (aright < aleft){
            right = pos, left = pos - m + 1;
            ans += aright;
        }
        else{
            left = pos, right = pos;
            ans += abs(aright);
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