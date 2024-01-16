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
    ll ans = 1;
    vector<int> prime_num;
    
    int isPrime[1000001]; fill_n(isPrime, 1000001, 1);
    for (int i=2; i<=n; i++){
        if (isPrime[i]){
            prime_num.push_back(i);
            for (int j=i*2; j<=n; j+=i){
                isPrime[j] = 0;
            }
        }
    }

    for (int i=0; i<prime_num.size(); i++){
        int item = prime_num[i];
        ll k = prime_num[i];
        while (k *  item <= n) k *= item;
        ans = (ans * k) % 987654321; 
    }
    cout << ans << endl;
}

int main(){
    fastio;
    INPUT();
    return 0;
}