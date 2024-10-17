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
    vector<string> v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    
    int state = v[0] > v[1];
    for (int i=1; i<n-1; i++){
        if (state && (v[i] < v[i+1])){
            cout << "NEITHER" << endl;
            return;
        }
        else if (!state && (v[i] > v[i+1])){
            cout << "NEITHER" << endl;
            return;
        }
    }
    
    if (state == 1) cout << "DECREASING" << endl;
    else cout << "INCREASING" << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}