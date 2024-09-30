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
    string s, t;
    while (cin >> s >> t){
        int state = 0;
        for (int i=0; i<t.size(); i++){
            if (t[i] == s[state]) state++;
            if (state == s.size()) {
                cout << "Yes" << endl;
                break;
            }
        }

        if (state < s.size())  cout << "No" << endl;
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