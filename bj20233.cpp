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
    int a, x, b, y, t; cin >> a >> x >> b >> y >> t;
    int ans_a = a;
    if (t > 30) ans_a += (t - 30) * x * 21;

    int ans_b = b;
    if (t > 45) ans_b += (t - 45) * y * 21;

    cout << ans_a << " " << ans_b << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
} 
