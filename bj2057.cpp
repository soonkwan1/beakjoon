#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#define endl "\n"
#define ll long long
using namespace std;

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
struct compMin {
    bool operator() (const int& a, const int& b) const {
        return a < b;
    }
};
void INPUT() {
    ll n; cin >> n;
    unordered_map<ll, int> m;
    vector<ll> fact; fact.push_back(1);

    ll ref = 1;
    int num = 1;
    while (ref <= 1000000000000000000) {
        ref *= num;
        fact.push_back(ref);
        m[ref]++;
        num++;
    }
    
    int idx = 0;
    for (int i = 0; i < fact.size(); i++) {
        if (n < fact[i]) {
            idx = i; break;
        }
    }
    
    // for (int i = 0; i < fact.size(); i++) cout << fact[i] << endl;

    for (int i = idx - 1; i >= 0; i--) {
        if (n - fact[i] < 0) continue;
        else if (n - fact[i] == 0) {
            cout << "YES" << endl;
            return;
        }
        n -= fact[i];
    }
    cout << "NO" << endl;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
