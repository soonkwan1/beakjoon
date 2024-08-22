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
    int a, b; cin >> a >> b;
    int k, x; cin >> k >> x;
    int low_limit = k - x;
    int high_limit = k + x;

    if (high_limit < a || low_limit > b) {
        cout << "IMPOSSIBLE" << endl;
        return;
    }
    else{
        if (low_limit < a) low_limit = a;
        if (high_limit > b) high_limit = b;
    }
    cout << high_limit - low_limit + 1 << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}