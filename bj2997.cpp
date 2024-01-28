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

struct compMin {
    bool operator() (const int& a, const int& b) const {
        return a < b;
    }
};

void INPUT() {
    vector<int> v;
    for (int i = 0; i < 3; i++) {
        int temp; cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end(), compMin());
    
    int d1 = v[1] - v[0];
    int d2 = v[2] - v[1];

    if (d1 > d2) {
        cout << v[0] + d2 << endl;
    }
    else if (d2 > d1) {
        cout << v[1] + d1 << endl;
    }
    else {
        cout << v[2] + d1 << endl;
    }
}

int main() {
    INPUT();
    return 0;
}
