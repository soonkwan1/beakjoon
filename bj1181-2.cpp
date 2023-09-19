#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int* stairs;
int* dp;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

int INPUT(){
    int n;
    cin >> n;
    stairs = new int[n];
    dp = new int[n];
    for (int i=0; i<n; i++){
        cin >> stairs[i];
    }

    dp[0] = stairs[0];
    if (n==1){
        return dp[0];
    }
    dp[1] = stairs[0] + stairs[1];
    if (n==2){
        return dp[1];
    }
    dp[2] = max(stairs[0] + stairs[2], stairs[1] + stairs[2]);
    if (n==3){
        return dp[2];
    }
    for (int i=3; i<n; i++){
        dp[i] = max(dp[i-2], dp[i-3] + stairs[i-1]) + stairs[i];
    }

    return dp[n-1];
}

void OUTPUT(int res){
    cout << res << "\n";
}

void FREEMEMORY(){
    delete[] stairs;
    delete[] dp;
}

int main(){
    INIT();
    OUTPUT(INPUT());
    FREEMEMORY();   
    return 0; 
}