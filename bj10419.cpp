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
    int t; cin >> t;
    while (t--) {
        int d; cin >> d;
        for (int i = 0; i <= d; i++) {
            if (i + i * i > d) {
                cout << i - 1 << endl;
                break;
            }
        }
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
