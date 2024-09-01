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
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    
    int ans = 1;
    int prev = v[0];
    for (int i=1; i<n; i++){
        if (prev <= v[i]) ans++;
        prev = v[i];
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