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
    int start = 1;
    for (int i=0; i<11; i++){
        v.push_back(start);
        start = start * 10 + 1;
    }

    ll n; cin >> n;
    if (n==0) {
        cout << 1 << endl;
        return;
    }
    for (int i=0; i<v.size(); i++){
        if (n < v[i]){
            cout << i << endl;
            break;
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