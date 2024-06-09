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
    int n; cin >> n;
    vector<int> v(6);
    for (int i=0; i<6; i++) cin >> v[i];
    int t, p; cin >> t >> p;

    int res = 0;
    for (int i=0; i<6; i++){
        int tmp = v[i] % t == 0 ? v[i] / t : v[i] / t + 1;
        res += tmp;
    }
    cout << res << endl;
    cout << n / p << " " << n % p << endl;
    
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}