#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <unordered_set>
#include <unordered_map>
#define ll long long
#define INF 98765432101
#define endl "\n"
using namespace std;
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);


ll** getDP(int n) {
    ll** tmp = new ll * [n];
    for (int i = 0; i < n; i++) {
        tmp[i] = new ll[n];
        fill_n(tmp[i], n, 0);
    }
    return tmp;
}
ll** getArr(int n) {
    ll** arr = new ll * [n];

    for (int i = 0; i < n; i++) {
        arr[i] = new ll[n];
        fill_n(arr[i], n, 0);
        cin >> arr[i][i];
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j + i < n; j++) {
            arr[j][j + i] = arr[j][j + i - 1] + arr[j + i][j + i];
        }
    }

    return arr;
}
void freeDP(ll** t, int n) {
    for (int i = 0; i < n; i++) delete[] t[i];
    delete[] t;
}

void printDP(ll** t, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << t[i][j] << "\t";
        }
        cout << endl;
    }
}
void INPUT() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;

        ll** dp = getDP(n);
        ll** arr = getArr(n);
        
        for (int i = 1; i < n; i++) {
            for (int j = 0; j + i < n; j++) {
                dp[j][j + i] = int(1e9);

                for (int k = j; k < j + i; k++) {
                    dp[j][j + i] = min(dp[j][j + i],
                        dp[j][k] + dp[k + 1][j + i] + arr[j][k] + arr[k + 1][j + i]);
                }
            }
        }
        cout << dp[0][n - 1] << endl;

        // printDP(dp, n);
        // printDP(arr, n);
        freeDP(dp, n);
        freeDP(arr, n);
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
