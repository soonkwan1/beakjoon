#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT(){
    int v, e; cin >> v >> e;
    priority_queue<pair<int, pair<int,int> >, vector<pair<int, pair<int,int> > >, greater<pair<int, pair<int,int> > > > edges;
    for (int i=0; i<e; i++){
        int start, end, cost; cin >> start >> end >> cost;
        edges.push(make_pair(cost, make_pair(start, end)));
    }

    int cnt = 0;

    while (cnt < v-1){
        int start, end, cost;
        cost = edges.top().first;
        start = edges.top().second.first;
        end = edges.top().second.second;
        edges.pop();

        
        
        cnt++;
    }

}

int main(){
    INIT();
    INPUT();
    return 0;
}