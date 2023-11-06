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
void printTable(int** t, int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++) cout << t[i][j] << " ";
        cout << endl;
    }
}
void INPUT(){
    int n; cin >> n;

    int* arr = new int[n+1]; for (int i=1; i<=n; i++) cin >> arr[i];
    int** dp = new int*[n+1]; for (int i=0; i<=n; i++) dp[i] = new int[n+1];

    for (int i=1; i<=n; i++) dp[i][i] = 1;
    for (int plus=1; plus<n; plus++){
        for (int i=1; i<=n; i++){
            int left = i; int right = i + plus;
            if (right > n) break;

            if (plus == 1){
                dp[left][right] = arr[left] == arr[right] ? 1 : 0;
                continue;
            }

            int lp = left + 1; int rm = right - 1;
            if (dp[lp][rm] == 1 && arr[right] == arr[left]) dp[left][right] = 1;
            else dp[left][right] = 0;
        }
    }
    int m; cin >> m;
    vector<int> ans;
    while(m--){
        int s, e; cin >> s >> e;
        ans.push_back(dp[s][e]);
    }

    // printTable(dp, n);

    for (int i=0; i<ans.size(); i++) cout << ans[i] << endl;

    for (int i=0; i<=n; i++) delete[] dp[i];
    delete[] dp;
    delete[] arr;
}

int main(){
    INIT();
    INPUT();
    return 0;
}