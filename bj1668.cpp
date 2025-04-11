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
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    int start = v[0];
    int left = 1;
    for (int i = 1; i < v.size(); i++) {
        if (v[i] > start) {
            start = v[i];
            left++;
        }
    }

    int right = 1;
    start = v[v.size() - 1];
    for (int i = v.size() - 2; i >= 0; i--) {
        if (v[i] > start) {
            start = v[i];
            right++;
        }
    }

    cout << left << endl << right << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
