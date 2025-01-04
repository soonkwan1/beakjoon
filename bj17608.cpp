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
    int* list = new int[n];
    for (int i = 0; i < n; i++) cin >> list[i];

    int ref = list[n - 1];
    int ans = 1;
    for (int i = n - 2; i >= 0; i--) {
        if (list[i] > ref) {
            ref = list[i];
            ans++;
        }
    }
    cout << ans << endl;

    delete[] list;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
