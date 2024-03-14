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
#define MOD 1000000007

int n, k;
void INPUT(){
    cin >> n >> k;
}
void SOLUTION(){
    ll* num = new ll[4000001];
    fill_n(num, 4000001, 0);
    num[0] = num[1] = 1;
    for (int i=2; i<=4000000; i++){
        num[i] = (num[i-1] % MOD * i % MOD) % MOD;
    }
    cout << (num[n] / num[k]) / num[n - k] << endl;
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}