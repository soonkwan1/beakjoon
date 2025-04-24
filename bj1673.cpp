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
    int n, k; 
    while (cin >> n >> k){
        int ans = 0;
        int coupon = n;
        int stamp = 0;
        while(coupon){
            ans += coupon;
            stamp += coupon;
            coupon = 0;
            coupon += stamp/k;
            stamp %= k;
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