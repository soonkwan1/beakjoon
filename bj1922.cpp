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
int* parents;
priority_queue<pair<int, pair<int,int> >, vector<pair<int, pair<int,int> > >, 
greater<pair<int, pair<int,int> > > > pq;
int getParent(int x){
    if (x == parents[x]) return x;
    return parents[x] = getParent(parents[x]);
}
bool isValid(int a, int b){
    int x = getParent(a);
    int y = getParent(b);

    if (x != y) return true;
    return false;
}
void Union(int a, int b){
    int x = getParent(a);
    int y = getParent(b);

    parents[y] = x;
}
void INPUT(){
    cin >> n >> m;
    parents = new int[n+1];
    for (int i=1; i<=n; i++) parents[i] = i;
    for (int i=0; i<m; i++){
        int start, end, cost; cin >> start >> end >> cost;
        pq.push(make_pair(cost, make_pair(start, end)));
    }
}
void SOLUTION(){
    ll ans = 0;
    while (!pq.empty()){
        int cost = pq.top().first;
        int start = pq.top().second.first;
        int end = pq.top().second.second;
        pq.pop();

        if (isValid(start, end)){
            Union(start, end);
            ans += cost;
        }
    }

    cout << ans << endl;

    delete[] parents;
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}