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
    priority_queue<int, vector<int>, greater<int> > pq;
    int n, l; cin >> n >> l;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        pq.push(tmp);
    }

    while(!pq.empty()){
        if (pq.top() > l) break;
        pq.pop();
        l++;
    }
    cout << l << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}