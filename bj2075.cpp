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
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < pow(n, 2); i++) {
        int tmp; cin >> tmp;
        pq.push(tmp);
        if (pq.size() > n) pq.pop();
    }

    cout << pq.top() << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
