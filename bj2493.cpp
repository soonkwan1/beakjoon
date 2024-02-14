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

int n;
int* dp;
int* obel;
void setDP(){
    dp = new int[n + 1];
    fill_n(dp, n, 0);
    obel = new int[n + 1]; obel[0] = 0;
    for (int i=1; i<=n; i++){
        cin >> obel[i];
    }
}
void printDP(){
    for (int i=1; i<=n; i++){
        cout << dp[i] << " ";
    }
    cout << endl;
}
void freeDP(){
    delete[] dp;
    delete[] obel;
}
void SOLUTION(){
    for (int i=2; i<=n; i++){
        if (obel[i] < obel[i-1]){
            dp[i] = i - 1;
        }
        else{
            int idx = dp[i - 1];
            while (true){
                if (obel[idx] > obel[i]){
                    dp[i] = idx;
                    break;
                }
                else if (dp[idx] == 0){
                    dp[i] = 0;
                    break;
                }
                idx = dp[idx];
            }
        }
    }
}
void INPUT(){
    cin >> n;
    setDP();
    SOLUTION();
    printDP();
    freeDP();
}

int main(){
    fastio;
    INPUT();
    return 0;
}