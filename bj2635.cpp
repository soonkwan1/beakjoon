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

void INPUT() {
    int n; cin >> n;
    vector<int>* v = new vector<int>[n + 1];
    
    int mx_val = -1;
    int mx_idx = 0;
    for (int i = n; i >= 0; i--) {
        int prev = n;
        int curr = i;
        int nx = prev - curr;
        v[i].push_back(n), v[i].push_back(i);

        while (nx >= 0) {
            v[i].push_back(nx);
            prev = curr;
            curr = nx;
            nx = prev - curr;
        }

        if (int(v[i].size()) > mx_val) {
            mx_idx = i;
            mx_val = v[i].size();
        }
    }

    cout << v[mx_idx].size() << endl;
    for (int i = 0; i < v[mx_idx].size(); i++) {
        cout << v[mx_idx][i] << " ";
    }
    cout << endl;

    delete[] v;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
