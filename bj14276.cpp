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

void verifyId(ll n) {
    vector<int> v;
    while (n) {
        v.push_back(n % 10);
        n /= 10;
    }

    int ret = 0;
    for (int i = 0; i < v.size(); i++) {
        if ((i + 1) % 2 == 1) ret += v[i];
        else {
            int tmp = v[i] * 2;
            ret += tmp / 10 + tmp % 10;
        }
    }
    
    if (ret % 10 == 0) cout << "T" << endl;
    else cout << "F" << endl;
}

void INPUT() {
    ll n; cin >> n;
    while (n--) {
        ll tmp; cin >> tmp;
        verifyId(tmp);
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
