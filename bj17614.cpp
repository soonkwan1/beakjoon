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

int isTSN(int k){
    int ret = 0;
    while (k){
        int tmp = k % 10;
        k /= 10;
        if (tmp == 3 || tmp == 6 || tmp == 9) ret++;
    }
    return ret;
}
void INPUT(){
    int n; cin >> n;
    int ans = 0;
    for (int i=1; i<=n; i++){
        ans += isTSN(i);
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