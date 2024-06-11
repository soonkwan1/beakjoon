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

bool checkNum(int n){
    if (n < 100) return true;
    vector<int> v;
    while (n >= 10){
        v.push_back(n % 10);
        n /= 10;
    }
    v.push_back(n);

    int check = v[1] - v[0];
    for (int i=2; i<v.size(); i++){
        if (v[i] - v[i-1] != check) return false;
    }
    return true;
}
void INPUT(){
    int n; cin >> n;
    int ans = 0;
    for (int i=1; i<=n; i++) {
        if (checkNum(i)) ans++;
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