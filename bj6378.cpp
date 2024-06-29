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
    while (true) {
        string n; cin >> n;
        if (n == "0") break;

        while (n.size() != 1) {
            int tmp = 0;
            for (int i = 0; i < n.size(); i++) {
                tmp += int(n[i]) - 48;
            }
            n = to_string(tmp);
        }
        cout << n << endl;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
