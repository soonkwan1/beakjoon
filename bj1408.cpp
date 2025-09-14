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

int timeToInt(string a) {
    int ret = 0;
    vector<int> v;
    for (int i = 0; i < a.size(); i++) {
        if (i == 2 || i == 5) continue;
        v.push_back(int(a[i]) - 48);
    }
    ret += (10 * v[0] + v[1]) * 3600 + (10 * v[2] + v[3]) * 60 + 10 * v[4] + v[5];

    return ret;
}

void INPUT() {
    string t1, t2; cin >> t1 >> t2;
    int start = timeToInt(t1);
    int end = timeToInt(t2);
    if (end < start) end += 24 * 3600;

    int ans = end - start;
    int a1 = ans / 3600; ans %= 3600;
    int a2 = ans / 60; ans %= 60;
    int a3 = ans;

    if (a1 < 10) cout << 0 << a1 << ":";
    else cout << a1 << ":";
    if (a2 < 10) cout << 0 << a2 << ":";
    else cout << a2 << ":";
    if (a3 < 10) cout << 0 << a3 << endl;
    else cout << a3 << endl;

}

int main() {
    fastio;
    INPUT();
    return 0;
}
