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
void INPUT(){
    unordered_map<ll, ll> ma;
    vector<ll> cum;
    ll t; cin >> t;
    int n; cin >> n; ll* cum1 = new ll[n+1]; 
    fse(1, n+1, 1){
        ll tmp; cin >> tmp;
        cum1[i] = cum1[i-1] + tmp;
    }
    for (int i=0; i<=n; i++){
        for (int j=i+1; j<=n; j++){
            cum.push_back(cum1[j] - cum1[i]);
        }
    }
    int m; cin >> m; ll* cum2 = new ll[m+1];
    fse(1, m+1, 1){
        ll tmp; cin >> tmp;
        cum2[i] = cum2[i-1] + tmp;
        ma[cum2[i]]++;
    }



    delete[] cum1; delete[] cum2;
}

int main(){
    INIT();
    INPUT();
    return 0;
}