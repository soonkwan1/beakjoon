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
    unordered_map<string, int> um;

    // STRAWBERRY, PLUM, BANANA, LIME
    for (int i = 0; i < n; i++) {
        string fruit; int tmp; cin >> fruit >> tmp;
        um[fruit] += tmp;
    }

    if (um["STRAWBERRY"] == 5) {
        cout << "YES" << endl;
        return;
    }
    else if (um["PLUM"] == 5) {
        cout << "YES" << endl;
        return;
    }
    else if (um["LIME"] == 5) {
        cout << "YES" << endl;
        return;
    }
    else if (um["BANANA"] == 5) {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
