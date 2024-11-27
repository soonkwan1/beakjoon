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

ll divideNum(int n, int p){
    vector<ll> v;
    while (n != 0){
        v.push_back(n % 10);
        n /= 10;
    }
    
    ll tmp = 0;
    for (int i=0; i<v.size(); i++){
        tmp += pow(v[i], p);
    }
    return tmp;
}
void INPUT(){
    ll a, p; cin >> a >> p;
    unordered_map<ll, int> um;

    vector<ll> v;
    while (true){
        if (!um[a]) v.push_back(a);
        if (um[a] == 3) break;
        um[a]++;
        a = divideNum(a, p);
    }

    int ans = 0;
    for (int i=0; i<v.size(); i++){
        if (um[v[i]] == 1) ans++;
    }
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