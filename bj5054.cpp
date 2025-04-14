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

struct compMin{
    bool operator() (const int& a, const int& b) const{
        return a < b;
    }
};
void INPUT(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        vector<int> v(n);
        for (int i=0; i<v.size(); i++) cin >> v[i];
        sort(v.begin(), v.end(), compMin());

        int ans = 100000;
        for (int i=0; i<=99; i++){
            ans = min(ans, abs(i - v[0]) + abs(i - v[v.size() - 1]) + v[v.size() - 1] - v[0]);
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