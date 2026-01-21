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
    int n, m; cin >> n >> m;
    int win = 0;
    priority_queue<int, vector<int>, greater<int> > pq;
    for (int i=0; i<m; i++){
        int a, b; cin >> a >> b;
        if (a >= b) win++;
        else{
            pq.push((b - a) / 2);
        }
    }

    int cost = 0;
    while (win < m - 1){
        cost += pq.top();
        win++;
        pq.pop();
    }
    cout << cost << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}