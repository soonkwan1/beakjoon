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

struct Node{
    int x1, y1, x2, y2;
};

void INPUT(){
    int c, r; cin >> c >> r;
    int k; cin >> k;

    while(k--){
        int a, b, c, d; cin >> a >> b >> c >> d;
        
    }

    ll** dp = new ll*[r+1];
    for (int i=0; i<=r; i++){
        dp[i] = new ll[c+1];
        fill_n(dp[i], c, 0);
    }



    for (int i=0; i<=r; i++) delete[] dp[i];
    delete[] dp;
}

int main(){
    fastio;
    INPUT();
    return 0;
}