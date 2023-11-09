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
#define fse(A,B,C) for (int i=A; i<B; i+=C)
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
int isPrime(int n){
    vector<int> ans;
    for (int i=1; i<=sqrt(n); i++){
        if (n % i == 0){
            ans.push_back(i);
            if (n / i != i) ans.push_back(n / i);
        }
    }
    if (ans.size() == 2) return 1;
    else return 0;
}
int* eratostenes(int n){
    int* era = new int[n+1];
    fill_n(era, n+1, 1);
    // vector<int> tos;
    era[0] = era[1] = 0;
    for (int i=2; i<=n; i++){
        if (era[i] == 0) continue;

        for (int j=i*2; j<=n; j+=i){
            era[j] = 0;
        }
        // if (isPrime(i)){
        //     // tos.push_back(i);

        //     for (int j=i*2; j<=n; j+=i){
        //         era[j] = 0;
        //     }
        // }
    }
    
    return era;
}
int getSize(vector<int> era, int n){
    int idx = 0;
    int ret = 0;
    while (n != 1){
        if (n % era[idx] == 0) {
            n /= era[idx];
            ret++;
        }
        else idx++;
    }
    return ret;
}
void INPUT(){
    int s, e; cin >> s >> e;
    int* era = eratostenes(e);

    int ans = 0;
    
    int* dp = new int[e+1];
    dp[0] = 0; dp[1] = 0;
    for (int i=2; i<=e; i++){
        if (era[i]) dp[i] = 1;
        else{
            for (int j=2; j<=sqrt(i); j++){
                if (i % j == 0){
                    dp[i] = dp[j] + dp[i / j];
                    break;
                }
            }
        }
    }

    for (int i=s; i<=e; i++){   
        ans += era[dp[i]];
    }

    // vector<int> prime_list;
    // for (int i=1; i<=e; i++){
    //     if (era[i]) prime_list.push_back(i);
    // }

    // for (int i=s; i<=e; i++){
    //     if (era[getSize(prime_list, i)]){
    //         ans++;
    //     }
    // }
    delete[] dp;
    delete[] era;
    cout << ans << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}