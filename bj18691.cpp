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
    int t; cin >> t;
    while (t--){
        int g, c, e; cin >> g >> c >> e;
        int tmp = e - c;
        if (tmp <= 0) cout << 0 << endl;
        else if (g == 1) cout << tmp << endl;
        else if (g == 2) cout << tmp * 3 << endl;
        else cout << tmp * 5 << endl;
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