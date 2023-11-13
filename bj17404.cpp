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
#define INF 987654321
#define fse(A,B,C) for (int i=A; i<B; i+=C)
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
int** getRGB(int n){
    int** rgb = new int*[n];
    for (int i=0; i<n; i++){
        rgb[i] = new int[3];
        for (int j=0; j<3; j++) cin >> rgb[i][j];
    }
    return rgb;
}
int** getDP(int n){
    int** table = new int*[n];
    for (int i=0; i<n; i++) table[i] = new int[3], fill_n(table[i], 3, INF);
    return table;
}
void freeRGB(int** rgb, int n){
    for (int i=0; i<n; i++) delete[] rgb[i];
    delete[] rgb;
}
void dynamicProgramming(int** rgb, int n, int start, int& ans){
    int** dp = getDP(n);
    dp[0][start] = rgb[0][start];

    for (int i=1; i<n-1; i++){
        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + rgb[i][0];
        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + rgb[i][1];
        dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + rgb[i][2];
    }
    
    if (start == 0){
        ans = min(ans, min(min(dp[n-2][0], dp[n-2][2]) + rgb[n-1][1], 
        min(dp[n-2][0], dp[n-2][1]) + rgb[n-1][2]));
    }
    else if (start == 1){
        ans = min(ans, min(min(dp[n-2][1], dp[n-2][2]) + rgb[n-1][0], 
        min(dp[n-2][0], dp[n-2][1]) + rgb[n-1][2]));
    }
    else{
        ans = min(ans, min(min(dp[n-2][1], dp[n-2][2]) + rgb[n-1][0], 
        min(dp[n-2][2], dp[n-2][0]) + rgb[n-1][1]));
    }

    freeRGB(dp, n);
}
void INPUT(){
    int n; cin >> n;
    int** rgb = getRGB(n);
    int ans = INF;
    for (int i=0; i<3; i++) dynamicProgramming(rgb, n, i, ans);
    cout << ans << endl;
    freeRGB(rgb, n);
}

int main(){
    INIT();
    INPUT();
    return 0;
}