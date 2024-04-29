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
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

int n;
bool eratos[10001];
void INPUT() {
    fill_n(eratos, 10001, true);
    eratos[0] = eratos[1] = false;

    vector<int> v;
    for (int i = 2; i <= 10000; i++) {
        if (!eratos[i]) continue;
        v.push_back(i);
        for (int j = i * 2; j <= 10000; j += i) {
            eratos[j] = false;
        }
    }

    int t; cin >> t;
    while (t--) {
        cin >> n;
        int s1, s2;
        for (int i = 0; i < v.size(); i++) {
            if (v[i] > n / 2) break;

            if (eratos[n - v[i]]) {
                s1 = v[i], s2 = n - v[i];
            }
        }
        cout << s1 << " " << s2 << endl;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
