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
    int n; cin >> n;

    priority_queue<int> pq;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        pq.push(tmp);
    }

    int first = pq.top();
    int cnt = pq.size();
    pq.pop();
    while (!pq.empty()){
        int tmp = pq.top();
        pq.pop();
        first--;
        if (tmp > first) first = tmp;
    }
    cout << first + cnt + 1 << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}