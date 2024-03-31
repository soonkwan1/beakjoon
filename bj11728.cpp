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

int n, m;
void SOLUTION(){
    cin >> n >> m;
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    
    for (int i=0; i<n; i++){
        ll tmp; cin >> tmp;
        pq.push(tmp);
    }
    for (int i=0; i<m; i++){
        ll tmp; cin >> tmp;
        pq.push(tmp);
    }
    
    while (!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
}
int main(){
    fastio;
    SOLUTION();
    return 0;
}
