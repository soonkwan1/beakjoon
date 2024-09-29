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

void INPUT2() {
    priority_queue<int, vector<int>, greater<int>> pq;
    int n; cin >> n;
    while (n--) {
        int tmp; cin >> tmp;
        pq.push(tmp);
    }

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
}

struct compMin {
    bool operator() (const int& a, const int& b) const {
        return a < b;
     }
};

void INPUT3() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end(), compMin());
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
}

void INPUT() {
    int n; cin >> n;
    int* l = new int[n];
    for (int i = 0; i < n; i++) cin >> l[i];
    sort(l, l + n);
    for (int i = 0; i < n; i++) cout << l[i] << " ";

    delete[] l;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
