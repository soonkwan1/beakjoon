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

ll LCM(ll a, ll b){
    if (b > a) swap(a, b);

    while (b != 0){
        ll tmp = a;
        a = b;
        b = tmp % b;
    }
    return a;
}

void INPUT(){
    int t; cin >> t;
    while (t--){
        ll a, b; cin >> a >> b;
        cout << a * b / LCM(a, b) << endl;
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