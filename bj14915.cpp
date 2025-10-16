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
    int n, m; cin >> n >> m;
    if (n == 0) {
        cout << 0 << endl;
        return;
    }
    
    vector<int> v;
    while (n){
        v.push_back(n % m);
        n /= m;
    }
    
    for (int i=v.size() - 1; i>=0; i--){
        if (v[i] >= 10 && v[i] < 16) cout << char(v[i] + 55);
        else cout << v[i];
    }
    cout << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}