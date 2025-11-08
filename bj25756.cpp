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
    double val = 0;
    cout.precision(6);
    cout << fixed;

    for (int i = 0; i < n; i++) {
        double tmp; cin >> tmp;
        double ot = 1 - (1 - val * 0.01) * (1 - tmp * 0.01);
        val = ot * 100;
        cout << ot * 100 << endl;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
} 
