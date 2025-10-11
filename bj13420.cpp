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

ll getCal(ll a, ll b, string cmd){
    if (cmd == "*") return a * b;
    else if (cmd == "/") return a / b;
    else if (cmd == "+") return a + b;
    return a - b;
}
void INPUT(){
    int t; cin >> t;
    while (t--){
        string num1, num2, cmd, res, tmp;
        cin >> num1 >> cmd >> num2 >> tmp >> res;
        
        ll calAns = getCal(stoll(num1), stoll(num2), cmd);
        if (calAns == stoll(res)) cout << "correct" << endl;
        else cout << "wrong answer" << endl;
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