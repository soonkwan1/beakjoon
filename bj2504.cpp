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

deque<char> dq;
bool flag;
ll smallAnnot();
ll bigAnnot();

ll bigAnnot(){
    char c = dq.front();
    dq.pop_front();
    ll tmp = 0;
    while (!dq.empty()){
        ll ret;
        if (dq.front() == ']'){
            dq.pop_front();
            tmp = tmp == 0 ? 3 : tmp * 3;
            return tmp;
        }
        else if (dq.front() == '['){
            ret = bigAnnot();
        }
        else if (dq.front() == '('){
            ret = smallAnnot();
        }
        else {
            break;
        }

        if (ret == -1) break;
        else tmp += ret;
    }
    return -1;
}
ll smallAnnot(){
    char c = dq.front();
    dq.pop_front();
    ll tmp = 0;
    while (!dq.empty()){
        ll ret;
        if (dq.front() == ')'){
            dq.pop_front();
            tmp = tmp == 0 ? 2 : tmp * 2;
            return tmp;
        }
        else if (dq.front() == '['){
            ret = bigAnnot();
        }
        else if (dq.front() == '('){
            ret = smallAnnot();
        }
        else {
            break;
        }

        if (ret == -1) break;
        else tmp += ret;
    }
    return -1;
}
void INPUT(){
    string line; cin >> line;
    for (int i=0; i<line.size(); i++){
        dq.push_back(line[i]);
    }
}
void SOLUTION(){
    ll ans = 0;
    ll tmp;
    flag = true;
    while (!dq.empty()){
        if (dq.front() == '['){
            tmp = bigAnnot();
        }
        else if (dq.front() == '('){
            tmp = smallAnnot();
        }
        else {
            ans = 0;
            break;
        }

        if (tmp == -1) {
            ans = 0;
            break;
        }
        else ans += tmp;
        
    }
    cout << ans << endl;
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}