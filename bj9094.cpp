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
        int n, m; cin >> n >> m;
        int ans = 0;
        for (int i=1; i<n; i++){
            for (int j=i+1; j<n; j++){
                if ((i*i + j*j + m) % (i * j) == 0) ans++;
            }
        }
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