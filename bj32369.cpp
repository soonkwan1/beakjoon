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
    int n, a, b; cin >> n >> a >> b;
    int good = 1, bad = 1;
    for (int i = 0; i < n; i++) {
        good += a; bad += b;
        if (good == bad) bad -= 1;
        else if (good < bad) {
            swap(good, bad);
        }
    }
    cout << good << " " << bad << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
