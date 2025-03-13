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
        int n; cin >> n;
        priority_queue<pair<ll, string> > pq;
        for (int i=0; i<n; i++){
            ll tmp; string name; cin >> tmp >> name;
            pq.push(make_pair(tmp, name));
        }
        cout << pq.top().second << endl;
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