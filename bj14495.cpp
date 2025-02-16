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
    vector<ll> v;
    for (int i=0; i<=3; i++) v.push_back(1);

    for (int i = 4; i <= n; i++) {
        v.push_back(v[i - 1] + v[i - 3]);
    }
    cout << v[n] << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
