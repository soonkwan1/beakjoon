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
        int a = 0, b = 0;
        for (int i = 0; i < 9; i++) {
            int t1, t2; cin >> t1 >> t2;
            a += t1, b += t2;
        }
        if (a == b) cout << "Draw" << endl;
        else if (a > b) cout << "Yonsei" << endl;
        else cout << "Korea" << endl;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
