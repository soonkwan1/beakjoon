#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#define endl "\n"
#define ll long long
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

struct compMin {
    bool operator() (const int& a, const int& b) const {
        return a < b;
    }
};
void INPUT() {
    vector<int> v;
    for (int i = 0; i < 3; i++) {
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), compMin());
    cout << v[1] << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
