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
#define fse(A,B,C) for (int i=A; i<B; i+=C)
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
ll findPrime(ll a){
    while (1){
        vector<ll> tmp;
        for (int i=1; i<=sqrt(a); i++){
            if (a % i == 0) {
                tmp.push_back(i);
                if (a % i != i) tmp.push_back(a / i);
            }
            
            if (tmp.size() >= 3) break;
        }
        
        if (tmp.size() == 2) return a;
        a++;
    }
}
void INPUT(){
    ll t; cin >> t;
    while (t--){
        ll a; cin >> a;
        if (a == 0 || a == 1) cout << 2 << endl;
        else cout << findPrime(a) << endl;
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}