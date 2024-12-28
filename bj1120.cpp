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
    string a, b; cin >> a >> b;
    int ans = 1000;
    for (int i = 0; i <= b.size() - a.size(); i++) {
        int tmp = 0;
        for (int j = 0; j < a.size(); j++) {
            if (a[j] != b[j + i]) tmp++;
        }
        ans = min(ans, tmp);
    }
    cout << ans << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
