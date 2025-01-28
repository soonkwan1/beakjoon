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

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT() {
    int t; cin >> t;
    int cnt = 1;
    while (t--) {
        int a, b; cin >> a >> b;
        cout << "Case " << cnt << ": " << a + b << endl;
        cnt++;
    }
}

int main() {
    INIT();
    INPUT();
    return 0;
}
