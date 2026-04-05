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
    double k; cin >> k;
    cout.precision(2);
    cout << fixed;

    double ans = 25 + k * 0.01;

    if (ans < 100) cout << 100.00 << endl;
    else if (ans <= 2000) cout << ans << endl;
    else cout << 2000.00 << endl;
}
void SOLUTION(){
    
}

int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}