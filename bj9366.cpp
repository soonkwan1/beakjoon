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
    for (int j=1; j<=t; j++) {
        vector<int> v(3);
        for (int i=0; i<3; i++) cin >> v[i];
        sort(v.begin(), v.end());
        
        cout << "Case #" << j << ": ";
        if (v[0] == v[1] && v[1] == v[2]) cout << "equilateral" << endl;
        else if (v[0] + v[1] <= v[2]) cout << "invalid!" << endl;
        else if (v[0] == v[1] || v[2] == v[1]) cout << "isosceles" << endl;
        else cout << "scalene" << endl;
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