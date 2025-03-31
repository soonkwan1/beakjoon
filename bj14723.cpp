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
    int k = 1;
    while (true){
        int lsl = ((k - 1) * k) / 2 + 1;
        int usl = (k * (k + 1)) / 2;
        if (n >= lsl && n <= usl) break;
        k++;
    }

    int mn = ((k - 1) * k) / 2 + 1;
    int mx = (k * (k + 1)) / 2;

    int start = ((k - 1) * k) / 2 + 1;
    int ans1 = k;
    int ans2 = 1;
    while (n != start){
        ans1--; ans2++;
        start++;
    }
    cout << ans1 << " " << ans2 << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}