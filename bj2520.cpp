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
    int t; cin >> t;
    while (t--){
        vector<double> v(5);
        double mul[5] = {2, 2, 4, 16, 1.777777777777778};
        int m = 10000000;
        for (int i=0; i<5; i++) {
            cin >> v[i];
            m = min(m, int(v[i] * mul[i]));
        }

        vector<int> v2(4);
        for (int i=0; i<4; i++) cin >> v2[i];
        
        int ans = 0;
        int mul2[4] = {1, 30, 25, 10};
        for (int i=0; i<v2.size(); i++){
            while (v2[i] >= mul2[i]){
                if (!m) break;
                ans++;
                v2[i] -= mul2[i];
                m -= 1;
            }
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