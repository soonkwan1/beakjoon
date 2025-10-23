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

int tempToInt(int weather, int& rage){
    if (weather){
        if (rage >= 0) rage++;
        else rage = 1;
    }
    else {
        if (rage <= 0) rage--;
        else rage = -1;
    }
    return rage;
}
void INPUT(){
    int n; cin >> n;
    ll rage = 0;
    ll ans = 0;

    for (int i=0; i<n; i++){
        ll temp; cin >> temp;
        if (temp) rage++;
        else rage--;
        ans += rage;
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