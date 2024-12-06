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
    int n; cin >> n;
    vector<int> v(n+1);
    for (int i=1; i<=n; i++){
        v[i] = i;
        int coin; cin >> coin;
        if (coin == 0) continue;
        else{
            int tmp = v[i-coin];
            int king = v[i-coin];
            for (int j=i-coin+1; j<=i; j++){
                king = v[j];
                v[j] = tmp;
                tmp = king;
            }
            v[i - coin] = i;
        }
    }
    for (int i=1; i<v.size(); i++) cout << v[i] << " ";
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}