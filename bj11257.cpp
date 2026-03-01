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
    while (n--) {
        int id, a, b, c; cin >> id >> a >> b >> c;
        cout << id << " " << a + b + c;
        cout << " ";
        // 11 8 12
        if (a + b + c >= 55 && a >= 11 && b >= 8 && c >= 12) cout << "PASS" << endl;
        else cout << "FAIL" << endl;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
} 
