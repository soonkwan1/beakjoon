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

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void bfs(int n) {
    deque<string> dq;
    vector<string> ans;

    for (int i = 0; i < 10; i++) dq.push_back(to_string(i));

    while (!dq.empty()) {
        string node = dq.front();
        int node_num = int(dq.front()[node.size() - 1]) - 48;
        ans.push_back(node);
        dq.pop_front();

        for (int i = 0; i <= node_num - 1; i++) {
            dq.push_back(node + to_string(i));
        }
    }

    if (n > ans.size()) {
        cout << -1 << endl;
    }
    else cout << ans[n - 1] << endl;
}
void INPUT() {
    int n; cin >> n;
    bfs(n);
}

int main() {
    INIT();
    INPUT();
    return 0;
}
