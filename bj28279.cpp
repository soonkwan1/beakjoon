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
    deque<int> dq;
    while(n--){
        int cmd; cin >> cmd;
        if (cmd == 1){
            int tmp; cin >> tmp;
            dq.push_front(tmp);
        }
        else if (cmd == 2){
            int tmp; cin >> tmp;
            dq.push_back(tmp);
        }
        else if (cmd == 3){
            if (dq.empty()) cout << -1 << endl;
            else{
                cout << dq.front() << endl;
                dq.pop_front();
            }
        }
        else if (cmd == 4){
            if (dq.empty()) cout << -1 << endl;
            else{
                cout << dq.back() << endl;
                dq.pop_back();
            }
        }
        else if (cmd == 5) cout << dq.size() << endl;
        else if (cmd == 6) cout << dq.empty() << endl;
        else if (cmd == 7){
            if (dq.empty()) cout << -1 << endl;
            else cout << dq.front() << endl;
        }
        else if (cmd == 8){
            if (dq.empty()) cout << -1 << endl;
            else cout << dq.back() << endl;
        }

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