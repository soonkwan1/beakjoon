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
    while (true){
        int tmp; cin >> tmp;
        if (!tmp) break;

        int ans = 0;
        int facto[6] = {1, 1, 2, 6, 24, 120};
        for (int i=5; i>=1; i--){
            int f = pow(10, i - 1);
            ans += (tmp / f) * facto[i];
            tmp %= f;
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