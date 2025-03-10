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
    for (int i=0; i<n; i++){
        ll tmp; cin >> tmp;
        unordered_map<int, bool> um;
        int ans = 0;
        while (tmp != 0){
            if (!um[tmp % 10]){
                um[tmp % 10] = true;
                ans++;
            }
            tmp /= 10;
        }
        cout << ans << endl;
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