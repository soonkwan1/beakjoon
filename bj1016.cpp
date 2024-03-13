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

vector<int> prime_num;
int* num;
ll mn, mx;
void eratostnes(){
    int* k = new int[1000001]; fill_n(k, 1000001, 1);
    for (int i=2; i<=1000000; i++){
        if (!k[i]) continue;
        prime_num.push_back(i);
        for (int j=i*2; j<=1000000; j+=i){
            k[j] = 0;
        }
    }
    delete[] k;
}
void INPUT(){
    cin >> mn >> mx;
    num = new int[1000100];
    fill_n(num, 1000100, 1);
    eratostnes();
}
void sqCheck(ll k){
    for (ll i=0; i<=prime_num.size(); i++){
        ll check_num = pow(prime_num[i], 2);

        if (k < check_num) break;
        else if (k % check_num == 0){
            for (ll j=k; j<=mx; j+=check_num){
                num[j - mn] = 0;
            }
        }
    }
}
void SOLUTION(){
    for (ll i=mn; i<=mx; i++){
        // cout << i - mn << num[i - mn] << endl;
        
        if (!num[i - mn]) continue;
        else sqCheck(i);
    }
    int ans = 0;
    for (ll i=mn; i<=mx; i++){
        ans += num[i - mn];
    }
    cout << ans << endl;
    delete[] num;
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}