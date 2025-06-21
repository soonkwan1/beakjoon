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
    unsigned ll n; cin >> n;
    int cnt = 64;
    while (true) {
        if (n % 2 == 1) break;
        n /= 2;
        cnt--;
    }
    cout << cnt << endl;

}

int main() {
    fastio;
    INPUT();
    return 0;
}
