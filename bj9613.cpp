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

int gcd(int a, int b){
    if (b > a) swap(a, b);
    while (b > 0){
        int tmp = a;
        a = b;
        b = tmp % b;
    }
    return a;
}

void INPUT(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> v(n);
        for (int i=0; i<n; i++) cin >> v[i];
        
        ll ans = 0;
        for (int i=0; i<n; i++){
            for (int j=i+1; j<n; j++){
                ans += gcd(v[i], v[j]);
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