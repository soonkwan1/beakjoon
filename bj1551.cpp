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

vector<int> getAns(vector<int> v) {
    vector<int> ret;
    for (int i = 0; i < v.size() - 1; i++) {
        ret.push_back(v[i + 1] - v[i]);
    }
    return ret;
}

void INPUT() {
    int n, k; cin >> n >> k;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        v.push_back(tmp);
        if (i < n - 1) {
            char ch; cin >> ch;
        }
    }

    for (int i = 0; i < k; i++) {
        v = getAns(v);
    }

    for (int i = 0; i < n - k - 1; i++) {
        cout << v[i] << ",";
    }
    cout << v[n - k - 1] << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
} 
