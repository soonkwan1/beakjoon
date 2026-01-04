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

void INPUT() {
    int n, l, d; cin >> n >> l >> d;
    bool flag[10000]; fill_n(flag, 10000, true);

    int t = n;
    int start = 0;
    while (t--) {
        for (int i = start; i < start + l; i++) {
            flag[i] = false;
        }
        start += 5 + l;
    }

    for (int i = 0; i < 100; i++) {
        cout << flag[i] << " ";
    }
    cout << endl;

    int ans = 0;
    while (true) {
        if (flag[ans]) {
            cout << ans << endl;
            break;
        }
        ans += d;
    }
}

void SOLUTION() {
    int N, L, D, time = 0, res = 0;
    cin >> N >> L >> D;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= L; j++) time++;
        for (int t = 1; t <= 5; t++) {
            if ((time % D) == 0) {
                res = time;
                i = N;
                break;
            }
            time++;
        }
        if (i == N && res == 0) {
            while (1) {
                if ((time % D) == 0) {
                    res = time;
                    break;
                }
                time++;
            }
        }
    }
    cout << res;
}

int main() {
    fastio;
    // INPUT();
    SOLUTION();
    return 0;
} 
