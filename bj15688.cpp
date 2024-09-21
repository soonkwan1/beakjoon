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
#include <functional>
#define ll long long
#define INF 98765432101
#define endl "\n"
using namespace std;
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);

void INPUT() {
    priority_queue<int, vector<int>, greater<int>> pq;

    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        pq.push(tmp);
    }
    while (!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
