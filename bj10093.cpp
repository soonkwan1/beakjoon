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
    ll a, b; cin >> a >> b;
    if (a > b){
        swap(a, b);
    }
    else if (a == b){
        cout << 0 << endl;
        return;
    }
    
    cout << b - a - 1 << endl;
    for (ll i=a+1; i<b; i++){
        cout << i << " ";
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