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
        vector<int> v(10);
        for (int i = 0; i < 10; i++) cin >> v[i];
        sort(v.begin(), v.end(), compMax());
        cout << v[2] << endl;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
