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
    ll n; cin >> n;
    vector<int> v;
    for (int i=0; i<100000; i++){
        int tmp = (pow(i, 2) + i) / 2;
        if (tmp > 1000000000) break;
        v.push_back(tmp);
    }
    
    int ans = 0;
    while (n > 0){
        int i;
        for (i=1; i<v.size(); i++){
            if (v[i] > n) break;
        }
        i--;
        ans += i;
        n -= v[i];
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