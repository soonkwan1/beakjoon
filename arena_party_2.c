#include <stdio.h>

int dp[13] = {0, };
int f(int n){
    // printf("%d ", n);
    if (n == 0) return 1;
    int sum = 0;
    for (int i=0; i<n; i++){
        if (dp[i] == 0) {
            dp[i] = f(i);
        }
        sum += dp[i];
    }
    return sum % 13;
}

int main(){
    char ans[] = "rgjgmbuyhbfcx";
    for (int i=0; i<13; i++){
        ans[i] ^= f(13 + i * i * i);
    }
    // f(13);
    // for (int i=0; i<13; i++){
    //     printf("%d ", dp[i]);
    // }
    // puts("");
    puts(ans);
}