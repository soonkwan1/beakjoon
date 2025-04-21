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
    vector<ll> v;
    v.push_back(0);
    for (ll i=1; i<=pow(2, 31); i*=2){
        v.push_back(i);
    }
    for (int i=0; i<v.size(); i++){
        if (n < v[i]){
            cout << v[i-1] << endl;
            break;
        }
    }
    // deque<int> dq;
    // for (int i=1; i<=n; i++){
    //     dq.push_back(i);
    // }

    // while (dq.size() > 1){
    //     int tmp = dq.size();
    //     for (int i=0; i<tmp; i++){
    //         if (i % 2 == 0){
    //             dq.pop_front();
    //         }
    //         else {
    //             dq.push_back(dq.front());
    //             dq.pop_front();
    //         }
    //     }
    //     for (int i=0; i<dq.size(); i++){
    //         cout << dq[i] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << dq.front() << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}