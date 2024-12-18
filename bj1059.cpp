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
    int l; cin >> l;
    for (int i=0; i<l; i++){
        int tmp; cin >> tmp;
        pq.push(tmp);
    }
    int n; cin >> n;

    int left = 1;
    while (!pq.empty()){
        if (n < pq.top()){
            break;
        }
        left = pq.top();
        pq.pop();
    }

    if (pq.empty()) {
        cout << 0 << endl;
        return;
    }
    else if (pq.size() != l){
        left++;
    }
    int right = pq.top() - 1;
    if (n < left || n > right) cout << 0 << endl;
    else cout << (n - left + 1) * (right - n + 1) - 1 << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}