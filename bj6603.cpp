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

void dfs(vector<int> v, deque<int> dq, int idx){
    if (v.size() == 6){
        for (int i=0; i<6; i++){
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i=idx; i<dq.size(); i++){
        v.push_back(dq[i]);
        dfs(v, dq, i+1);
        v.pop_back();
    }
}

void INPUT(){
    while (true){
        int n; cin >> n;
        if (!n) break;
        deque<int> dq;
        for (int i=0; i<n; i++){
            int tmp; cin >> tmp;
            dq.push_back(tmp);
        }
        
        vector<int> v;
        dfs(v, dq, 0);
        cout << endl;
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