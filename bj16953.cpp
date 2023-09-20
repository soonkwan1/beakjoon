#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
long long bfs(string start, string target){
    long long ret_val = -1;
    if (stoll(start) > stoll(target)) return ret_val;
    
    deque<pair<string, long long> > dq;
    dq.push_back(make_pair(start, 1));

    while (!dq.empty()) {
        string node = dq.front().first;
        long long cost = dq.front().second;
        dq.pop_front();

        if (node == target){
            ret_val = cost;
            break;
        }

        string tn1 = node + '1';
        if (stoll(tn1) <= stoll(target)){
            dq.push_back(make_pair(tn1, cost+1));
        }

        string tn2 = to_string(stoll(node) * 2);
        if (stoll(tn2) <= stoll(target)){
            dq.push_back(make_pair(tn2, cost+1));
        }
    }

    return ret_val;
}
void INPUT(){
    string a, b; cin >> a >> b;
    cout << bfs(a, b) << "\n";
}

int main(){
    INIT();
    INPUT();
    return 0;
}