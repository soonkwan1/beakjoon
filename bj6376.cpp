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
    vector<double> v;
    v.push_back(1);
    for (int i=1; i<=10; i++){
        double tmp = v[v.size() - 1];
        v.push_back(tmp * i);
    }

    
    cout << "n e" << endl;
    cout << "- -----------" << endl;
    cout << 0 << " " << 1 << endl;
    cout << 1 << " " << 2 << endl;
    cout << 2 << " " << 2.5 << endl;

    cout.precision(9);
    cout << fixed;
    double ans = 0;
    for (int i=0; i<10; i++){
        ans += 1 / v[i];
        if (i < 3) continue;
        cout << i << " " << ans << endl;
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