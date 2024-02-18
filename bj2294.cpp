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

int n, k, ans;
int* dp;
vector<int> coins;

void setMem(){
    dp = new int[k+1];
    fill_n(dp, k+1, int(1e9));
    dp[0] = 0;
}
void freeMem(){
    delete[] dp;
}
void SOLUTION(){
    ans = int(1e9);
    for (int i=1; i<=k; i++){
        for (int j=0; j<coins.size(); j++){
            if (i < coins[j]) break;
            if (dp[i - coins[j]] == -1) continue;

            dp[i] = min(dp[i], dp[i - coins[j]] + 1);
        }
    }
}
struct compMin{
    bool operator() (const int& a, const int& b) const{
        return a < b;
    }
};
void printDP(){
    for (int i=0; i<=k ;i++){
        if (dp[i] == int(1e9)) dp[i] = -1;
        // cout << dp[i] << " ";
    }
    cout << dp[k] << endl;
}
void INPUT(){
    unordered_map<int, bool> um;
    cin >> n >> k;
    for (int i=0; i<n; i++){
        int temp; cin >> temp;
        if (um[temp]) continue;
        um[temp] = 1;
        coins.push_back(temp);
    }
    sort(coins.begin(), coins.end(), compMin());
    setMem();
    SOLUTION();
    printDP();
    freeMem();
}
int main(){
    fastio;
    INPUT();
    return 0;
}