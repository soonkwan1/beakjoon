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
    int n; cin >> n;
    deque<int> v;
    for (int i = 1; i <= n; i++) v.push_back(i);

    vector<int> mov(n + 1);
    for (int i = 1; i <= n; i++) cin >> mov[i];

    int idx = 1;
    for (int i = 0; i < n; i++) {
        cout << v.front() << " ";
        v.pop_front();

        if (i == n - 1) break;

        if (mov[idx] > 0) {
            mov[idx]--;
            for (int j = 0; j < mov[idx]; j++) {
                v.push_back(v.front());
                v.pop_front();
            }
        }
        else {
            int tmp = mov[idx] * -1;
            for (int j = 0; j < tmp; j++) {
                v.push_front(v.back());
                v.pop_back();
            }
        }
        idx = v.front();
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
