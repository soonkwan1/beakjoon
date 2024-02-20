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

int n;
priority_queue<int, vector<int>, greater<int> > pq;
struct compMin{
    bool operator() (const int& a, const int& b) const{
        return a < b;
    }
};
void INPUT(){
    cin >> n;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        pq.push(tmp);
    }
}
void SOLUTION(){
    ll ans = 0;
    while (pq.size() > 1){
        ll a = pq.top(); pq.pop();
        ll b = pq.top(); pq.pop();
        ans += a + b;
        pq.push(a + b);
    }
    cout << ans << endl;
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}