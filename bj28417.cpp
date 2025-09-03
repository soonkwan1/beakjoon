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
    int ans = 0;
    for (int i=0; i<n; i++){
        int tmp = 0;
        int a, b; cin >> a >> b;
        tmp += max(a, b);
        priority_queue<int> pq;
        for (int j=0; j<5; j++){
            int num; cin >> num;
            pq.push(num);
        }
        tmp += pq.top();
        pq.pop();
        tmp += pq.top();

        ans = max(ans, tmp);
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