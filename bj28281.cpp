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
    int n, x; cin >> n >> x;

    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    int total = v[0] + v[1];
    int a1 = v[0], a2 = v[1];

    for (int i=1; i<n-1; i++){
        int tmp = v[i] + v[i+1];
        if (tmp < total){
            total = tmp;
            a1 = v[i], a2 = v[i+1];
        }
    }
    cout << a1 * x  + a2 * x << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}