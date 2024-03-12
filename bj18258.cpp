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
    queue<int> q;
    while(n--){
        string cmd; cin >> cmd;
        if (cmd == "push"){
            int n; cin >> n;
            q.push(n);
        }
        else if (cmd == "pop"){
            if (q.empty()) cout << -1 << endl;
            else{
                cout << q.front() << endl;
                q.pop();
            }
        }
        else if (cmd == "size"){
            cout << q.size() << endl;
        }
        else if (cmd == "empty") cout << q.empty() << endl;
        else if (cmd == "front"){
            if (q.empty()) cout << -1 << endl;
            else cout << q.front() << endl;
        }
        else if (cmd == "back"){
            if (q.empty()) cout << -1 << endl;
            else cout << q.back() << endl;
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