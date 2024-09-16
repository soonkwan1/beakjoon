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
    if (n == 1 || n == 2 || n == 3) cout << 4 << endl;
    else if (n % 2 == 0) cout << n << endl;
    else cout << n + 1 << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
