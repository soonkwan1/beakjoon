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
    double x1, y1, r1, x2, y2, r2; cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    double dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    double rsum = r1 + r2;
    if (dist >= rsum) cout << "NO" << endl;
    else if (dist < rsum) cout << "YES" << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}