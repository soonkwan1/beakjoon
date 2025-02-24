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
    vector<int> prices(n+1);
    int ans = 0;
    for (int i=1; i<=n; i++){
        int t, p; cin >> t >> p;

        // can't work : period exceed
        if (i + t > n + 1) continue;

        if (prices[i + t]){
            prices[i + t] = max(prices[i + t], prices[i] + p);
        }
        else{
            prices[i + t] = prices[i] + p;
        }
        
        ans = max(ans, prices[i]);
    }
    
    for (int i=1; i<=n; i++) cout << "Day " << i << " : " << prices[i] << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}