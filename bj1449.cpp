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
    int n, l; cin >> n >> l;
    priority_queue<int, vector<int>, greater<int> > pq;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        pq.push(tmp);
    }

    int ans = 0;
    bool blocked[1001]; fill_n(blocked, 1001, false);
    while (!pq.empty()){
        if (!blocked[pq.top()]){
            for (int i=pq.top(); i<pq.top() + l; i++){
                blocked[i] = true;
            }
            ans++;
        }
        pq.pop();
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