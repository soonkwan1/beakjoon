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
    int n, k; cin >> n >> k;
    unordered_map<int, int> umm;
    unordered_map<int, int> umw;
    for (int i = 0; i < n; i++) {
        int gender, grade; cin >> gender >> grade;
        if (gender) umm[grade]++;
        else umw[grade]++;
    }

    int ans = 0;
    for (int i = 1; i <= 6; i++) {
        int tmpm = umm[i] % k == 0 ? umm[i] / k : umm[i] / k + 1;
        int tmpw = umw[i] % k == 0 ? umw[i] / k : umw[i] / k + 1;
        ans += tmpm + tmpw;
    }
    cout << ans << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
