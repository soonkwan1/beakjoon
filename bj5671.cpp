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

int ans;
int getNum(deque<int> dq) {
    int tmp = 0;
    int digit = 1;
    for (int i = 0; i < dq.size(); i++) {
        tmp += dq[i] * digit;
        digit *= 10;
    }
    return tmp;
}
void dfs(deque<int> dq, unordered_map<int, bool> um, int n, int m) {
    int tmp = getNum(dq);
    if (tmp >= n && tmp <= m) ans++;

    for (int i = 0; i < 10; i++) {
        if (um[i]) continue;
        dq.push_front(i);
        um[i] = true;

        int k = getNum(dq);
        if (k > m) break;

        dfs(dq, um, n, m);
        dq.pop_front();
        um[i] = false;
    }
}

void INPUT() {
    int n, m;
    while (cin >> n >> m) {
        ans = 0;   
        unordered_map<int, bool> um;
        deque<int> dq;
        for (int i = 1; i < 10; i++) {
            dq.push_back(i);
            um[i] = true;
            dfs(dq, um, n, m);
            dq.pop_back();
            um[i] = false;
        }
        cout << ans << endl;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
