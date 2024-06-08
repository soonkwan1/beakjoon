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

int n, s;
int ans;
void dfs(int idx, int depth, int mid, vector<int> tv, vector<int> v) {
    if (depth == n) {
        if (tv.size() == 0) return;

        if (mid == s) ans++;
        /*cout << "수열: ";
        for (int i = 0; i < tv.size(); i++) cout << tv[i] << " ";
        cout << endl << "합: " << mid << endl;*/
        return;
    }

    tv.push_back(v[idx]);
    dfs(idx + 1, depth + 1, mid + v[idx], tv, v);
    tv.pop_back();
    dfs(idx + 1, depth + 1, mid, tv, v);
}
void INPUT() {
    ans = 0;
    cin >> n >> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vector<int> tv;
    dfs(0, 0, 0, tv, v);
    cout << ans << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
