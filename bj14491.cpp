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
    vector<int> v;
    int cnt = 1;
    while (n) {
        v.push_back(n % 9);
        n /= 9;
    }
    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i];
    }
    cout << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
