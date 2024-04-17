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
    int n, k; cin >> n >> k;
    deque<int> dq;
    for (int i=1; i<=n; i++) dq.push_back(i);

    vector<int> ans;
    while (!dq.empty()){
        for (int i=0; i< k - 1; i++){
            int tmp = dq.front();
            dq.pop_front();
            dq.push_back(tmp);
        }

        ans.push_back(dq.front());
        dq.pop_front();
    }

    cout << "<";
    for (int i=0; i<ans.size() - 1; i++){
        cout << ans[i] << ", ";
    }
    cout << ans[n-1] << ">" << endl;
    
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}