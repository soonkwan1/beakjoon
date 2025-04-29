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
    unordered_map<char, int> um;
    um['-'] = 0; um['\\'] = 1; um['('] = 2; um['@'] = 3;
    um['?'] = 4; um['>'] = 5; um['&'] = 6; um['%'] = 7;
    um['/'] = -1;

    while (true){
        string line; cin >> line;
        if (line[0] == '#') break;
        
        ll ans = 0;
        ll digit = 1;
        for (int i=line.size()-1; i>=0; i--){
            ans += digit * um[line[i]];
            digit *= 8;
        }
        cout << ans << endl;
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