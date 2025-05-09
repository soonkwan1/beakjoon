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
    ll n; cin >> n;
    ll total = 0;
    for (int i = 1; i < n; i++) {
        total += i * n + i;
    }
    cout << total << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
