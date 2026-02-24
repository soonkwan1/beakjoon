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
    bool operator() (const double& a, const double& b) const {
        return a < b;
    }
};

void INPUT() {
    int cnt = 1;
    while (true) {
        int n; cin >> n;
        if (!n) break;

        vector<double> v;
        for (int i = 0; i < n; i++) {
            double tmp; cin >> tmp;
            v.push_back(tmp);
        }

        // sort(v.begin(), v.end(), compMin());

        cout.precision(1);
        cout << fixed;

        if (n % 2 == 1) cout << "Case " << cnt << ": " << v[n/2] << endl;
        else if (n % 2 == 0) cout << "Case " << cnt << ": " << (v[n/2 - 1] + v[n/2]) / 2 << endl;

        cnt++;
    }
}
void SOLUTION() {

}

int main() {
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}
