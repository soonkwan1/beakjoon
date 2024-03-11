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

int** dp;
void getDP(){
    dp = new int*[5001];
    for (int i=0; i<=5000; i++){
        dp[i] = new int[10];
        fill_n(dp[i], 10, 0);
    }
}
void freeDP(){
    for (int i=0; i<=5000; i++) delete dp[i];
    delete[] dp;
}
void printDP(){
    for (int i=1; i<5; i++){
        for (int j=1; j<10; j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}
void INPUT(){
    
}
void SOLUTION(){
    getDP();

    int start1 = 0, start2 = 0;
    for (int i=1; i<10; i++){
        dp[1][i] = 1;
        if (i <= 6) dp[2][i] = 11;
        else dp[2][i] = 9;
        start1 += dp[1][i];
        start2 += dp[2][i];
    }

    int md = 1000000;
    for (int i=3; i<=5000; i++){
        int tmp = 0;
        for (int j=1; j<10; j++){
            if (j <= 6){
                dp[i][j] = (start1 % md + 18 + start2 % md) % md;
            }
            else{
                dp[i][j] = start2 % md;
            }
            tmp = (tmp % md + dp[i][j]) % md;
        }
        start1 = start2;
        start2 = tmp;
    }
    printDP();
    string line; cin >> line;
    cout << dp[line.size()][int(line[line.size()-1]) - 48] << endl;

    freeDP();
}
int main(){
    fastio;
    SOLUTION();
    return 0;
}