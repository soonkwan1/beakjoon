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

bool checkUm(unordered_map<ll, bool> u){
    for (int i=0; i<10; i++){
        if (!u[i]) return true;
    }
    return false;
}
void addUm(unordered_map<ll, bool>& um, ll n){
    vector<ll> v;
    while (n){
        v.push_back(n % 10);
        n /= 10;
    }
    for (int i=0; i<v.size(); i++){
        um[v[i]] = true;
    }
}
void INPUT(){
    ll tmp;
    while (cin >> tmp){
        unordered_map<ll, bool> um;

        ll cnt = 0;
        while (checkUm(um)){
            ll t = tmp * (cnt + 1);
            addUm(um, t);
            cnt++;
        }
        cout << cnt << endl;
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