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
    int ans = 1;
    for (int i=0; i<n; i++){
        char seat; cin >> seat;
        if (seat == 'S'){
            ans++;
        }
        else if (seat == 'L'){
            char tmp; cin >> tmp;
            i++;
            ans++;
        }
    }
    if (ans >= n) cout << n << endl;
    else cout << ans << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}