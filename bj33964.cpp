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
    vector<ll> v;
    v.push_back(0);
    ll start = 1;
    for (int i=0; i<10; i++){
        v.push_back(start);
        start = start * 10 + 1;
    }

    ll a, b; cin >> a >> b;
    cout << v[a] + v[b] << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}