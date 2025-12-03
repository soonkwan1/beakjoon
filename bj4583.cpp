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
    unordered_map<char, char> um;
    um['b'] = 'd'; um['p'] = 'q';
    um['d'] = 'b'; um['q'] = 'p';
    um['i'] = 'i'; um['o'] = 'o'; um['v'] = 'v';
    um['w'] = 'w'; um['x'] = 'x';
    while (true){
        string line; cin >> line;
        if (line == "#") break;

        bool flag = true;
        deque<char> dq;
        for (int i=0; i<line.size(); i++){
            if (!um[line[i]]){
                flag = false;
                break;
            }
            dq.push_front(um[line[i]]);
        }

        if (!flag) {
            cout << "INVALID" << endl;
            continue;
        }
        for (int i=0; i<dq.size(); i++){
            cout << dq[i];
        }
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