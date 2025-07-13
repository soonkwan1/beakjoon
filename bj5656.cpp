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
    int a, b; string cmd;
    int cnt = 1;
    while (true){
        cin >> a >> cmd >> b;
        if (cmd == "E") break;

        bool result;
        if (cmd == ">") result = a > b;
        else if (cmd == ">=") result = a >= b;
        else if (cmd == "<") result = a < b;
        else if (cmd == "<=") result = a <= b;
        else if (cmd == "==") result = a == b;
        else result = a != b;

        if (result) cout << "Case " << cnt << ": true" << endl;
        else cout << "Case " << cnt << ": false" << endl;
        cnt++;
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