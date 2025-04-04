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

int reverseInt(int n) {
    vector<int> v;
    while (n != 0) {
        v.push_back(n % 10);
        n /= 10;
    }
    int state = 0;
    vector<int> nv;
    for (int i = 0; i < v.size(); i++) {
        if (!state && v[i] == 0) {
            continue;
        }
        else if (!state && v[i] != 0) {
            state = 1;
            nv.push_back(v[i]);
        }
        else {
            nv.push_back(v[i]);
        }
    }
    int ret = 0;
    int digit = 1;
    for (int i = nv.size() - 1; i >= 0; i--) {
        ret += digit * nv[i];
        digit *= 10;
    }
    return ret;
}
void INPUT() {
    int n, k; cin >> n >> k;
    priority_queue<int> pq;
    int ans = -1;
    for (int i = 1; i <= k; i++) {
        ans = max(ans, reverseInt(n * i));
    }
    cout << ans << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
