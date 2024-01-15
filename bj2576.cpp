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

struct compMin {
    bool operator() (const int& a, const int& b) const {
        return a < b;
    }
};

void INPUT() {
    vector<int> v;
    int total = 0;
    int mn = 10000;
    for (int i = 0; i < 7; i++) {
        int tmp; cin >> tmp;
        if (tmp % 2 == 1) v.push_back(tmp), total += tmp, mn = min(mn, tmp);
    }
    
    if (v.size() == 0) cout << -1 << endl;
    else cout << total << endl << mn << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
