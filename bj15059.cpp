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
    int a, b, c; cin >> a >> b >> c;
    int a1, b1, c1; cin >> a1 >> b1 >> c1;
    int ans = 0;
    ans += max(0, -(a - a1));
    ans += max(0, -(b - b1));
    ans += max(0, -(c - c1));
    cout << ans << endl;
}
void SOLUTION(){
    
}

int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}