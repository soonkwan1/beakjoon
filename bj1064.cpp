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
typedef pair<double, double> pr;

double check(pr a, pr b, pr c) {
    return (b.first - a.first) * (c.second - a.second) - (c.first - a.first) * (b.second - a.second);

}

double getDist(pr a, pr b) {
    double x = a.first - b.first;
    double y = a.second - b.second;
    return sqrt(x * x + y * y);
}

double getDist2(double a, double b) {
    return 2 * (a + b);
}

void INPUT() {
    cout.precision(14);
    cout << fixed;

    pr a, b, c;
    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    cin >> c.first >> c.second;

    if (check(a, b, c) == 0) cout << -1 << endl;
    else {
        double d1 = getDist(a, b);
        double d2 = getDist(a, c);
        double d3 = getDist(b, c);

        vector<double> v;
        v.push_back(getDist2(d1, d2));
        v.push_back(getDist2(d1, d3));
        v.push_back(getDist2(d2, d3));

        double mx = 0;
        double mn = 10000000;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] > mx) mx = v[i];
            if (v[i] < mn) mn = v[i];
        }

        cout << mx - mn << endl;
    }

}

int main() {
    fastio;
    INPUT();
    return 0;
} 
