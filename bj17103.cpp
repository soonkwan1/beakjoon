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
#define LIMIT 1000001

int isPrime[LIMIT];
vector<int> v;
void INPUT(){
    fill_n(isPrime, LIMIT, 1); isPrime[0] = isPrime[1] = 0;
    for (int i=2; i<=LIMIT; i++){
        if (!isPrime[i]) continue;
        v.push_back(i);
        for (int j=i*2; j<=LIMIT; j += i){
            isPrime[j] = 0;
        }
    }
}
void SOLUTION(){
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int ans = 0;
        for (int i=0; i<v.size(); i++){
            if (v[i] > n / 2) break;
            
            if (isPrime[n - v[i]]){
                ans++;
            }
        }
        cout << ans << endl;
    }
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}