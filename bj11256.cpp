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

struct compMax {
    bool operator() (const int& a, const int& b) const {
        return a > b;
    }
};
void INPUT() {
    int t; cin >> t;
    while (t--) {
        int j, n; cin >> j >> n;
        vector<int> boxes;
        for (int i = 0; i < n; i++) {
            int r, c; cin >> r >> c;
            boxes.push_back(r * c);
        }
        sort(boxes.begin(), boxes.end(), compMax());

        int ans = 0;
        int idx = 0;
        while (j > 0) {
            j -= boxes[idx];
            idx++; ans++;
        }
        cout << ans << endl;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
