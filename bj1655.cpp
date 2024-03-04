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
    priority_queue<int, vector<int>, greater<int> > uppq;
    priority_queue<int> downpq;
    vector<int> ans;

    int n; cin >> n;
    while(n--){
        int tmp; cin >> tmp;
        if (uppq.size() == downpq.size()){
            downpq.push(tmp);
            if (uppq.size() >= 1 && uppq.top() < downpq.top()){
                int t1 = uppq.top(); uppq.pop();
                int t2 = downpq.top(); downpq.pop();
                downpq.push(t1); uppq.push(t2);
            }
        }
        else{
            uppq.push(tmp);
            if (uppq.top() < downpq.top()){
                int t1 = uppq.top(); uppq.pop();
                int t2 = downpq.top(); downpq.pop();
                downpq.push(t1); uppq.push(t2);
            }
        }
        ans.push_back(downpq.top());
    }
    for (int i=0; i<ans.size(); i++) cout << ans[i] << endl;
}

int main(){
    fastio;
    INPUT();
    return 0;
}