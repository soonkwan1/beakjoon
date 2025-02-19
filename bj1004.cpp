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

bool isSeparate(double x1, double y1, double x2, double y2, double rx, double ry, double r){
    double tmp1 = sqrt(pow(x1 - rx, 2) + pow(y1 - ry, 2));
    double tmp2 = sqrt(pow(x2 - rx, 2) + pow(y2 - ry, 2));
    if (tmp1 > r && tmp2 <= r) return true;
    if (tmp1 <= r && tmp2 > r) return true;
    return false;
}
void INPUT(){
    int t; cin >> t;
    while (t--){
        double x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        int n; cin >> n;
        int ans = 0;
        for (int i=0; i<n; i++){
            double rx, ry, r; cin >> rx >> ry >> r;
            if (isSeparate(x1, y1, x2, y2, rx, ry, r)) ans++;
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