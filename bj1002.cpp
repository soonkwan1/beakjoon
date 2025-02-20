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
        double x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        double dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

        if (dist == 0 && r1 == r2){
            cout << -1 << endl;
        }
        else if (dist < r1 + r2 && (dist > abs(r1 - r2))){
            cout << 2 << endl;
        }
        else if (dist == r1 + r2 || dist == abs(r1 - r2)){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
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