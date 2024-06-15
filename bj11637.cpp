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
        priority_queue<pair<int,int> > pq;
        int n; cin >> n;
        int total = 0;
        for (int i=1; i<=n; i++){
            int tmp; cin >> tmp;
            total += tmp;
            pq.push(make_pair(tmp, i));
        }

        int res_score = pq.top().first;
        int res_num = pq.top(). second;
        pq.pop();

        if (res_score == pq.top().first) cout << "no winner" << endl;
        else if (res_score > total - res_score) cout << "majority winner " << res_num << endl;
        else cout << "minority winner " << res_num << endl;
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