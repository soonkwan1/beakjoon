#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
using namespace std;

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT() {
    int n; cin >> n;
    vector<pair<double, double>> list;

    for (int i = 0; i < n; i++) {
        double x, y; cin >> x >> y;
        list.push_back(make_pair(x, y));
    }
    list.push_back(make_pair(list[0].first, list[0].second));

    double m1 = 0;
    double m2 = 0;
    for (int i = 0; i < list.size() - 1; i++) {
        m1 += list[i].first * list[i + 1].second;
        m2 += list[i].second * list[i + 1].first;
    }

    cout << fixed;
    cout.precision(1);
    cout << abs(m1 - m2) / 2 << endl;

}

int main() {
    INIT();
    INPUT();
    return 0;
}
