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
    int n, t; cin >> n >> t;
    priority_queue<pair<int,int> > pq;
    for (int i=0; i<n; i++){
        int a, b; cin >> a >> b;
        if (a + b > t) continue;
        pq.push(make_pair(a, b));
    }
    if (pq.empty()) cout << -1 << endl;
    else cout << pq.top().first << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}