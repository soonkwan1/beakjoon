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
    int scores[9] = {100, 100, 200, 200, 300, 300, 400, 400, 500};
    vector<int> v(9);
    for (int i=0; i<9; i++) cin >> v[i];

    int total = 0;
    for (int i=0; i<9; i++){
        if (v[i] > scores[i]){
            cout << "hacker" << endl;
            return;
        }
        total += v[i];
    }

    if (total >= 100) cout << "draw" << endl;
    else cout << "none" << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}