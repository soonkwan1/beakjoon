#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
#define ll long long
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
ll sumList(ll* l, int s, int e){
    ll ret = 0;
    for (int i=s; i<=e; i++){
        ret += l[i];
    }
    return ret;
}
void INPUT(){
    int n, s; cin >> n >> s;
    ll* list = new ll[n];
    
    for (int i=0; i<n; i++) cin >> list[i];

    ll start = 0; ll end = 0;
    ll ans = 1e9; ll total = 0;
    bool possible = false;

    while (start < n){
        if (total >= s || end == n){
            total -= list[start];
            start++;
        }
        else if (total < s){
            total += list[end];
            end++;
        }

        if (total >= s){
            possible = true;
            ans = min(ans, end - start);
        }
    }
    
    if (possible) cout << ans << endl;
    else cout << 0 << endl;

    delete[] list;
}

int main(){
    INIT();
    INPUT();
    return 0;
}