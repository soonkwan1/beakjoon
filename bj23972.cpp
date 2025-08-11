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
    ll k, n; cin >> k >> n;

    if (n == 1) {
        cout << -1 << endl;
        return;
    }

    if ((n * k) % (n - 1)){
        cout << (n * k) / (n - 1) + 1 << endl;
    }
    else{
        cout << (n * k) / (n - 1) << endl;
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