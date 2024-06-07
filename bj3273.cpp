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
    bool* num = new bool[2000001]; fill_n(num, 2000001, false);
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        num[tmp] = true;
    }
    int x; cin >> x;
    
    int ans = 0;
    for (int i = 1; i < x; i++) {
        if (i == x - i) continue;
        if (num[i] == true && num[x - i] == true) {
            num[i] = false, num[x - i] = false;
            ans++;
        }
    }
    cout << ans << endl;

    delete[] num;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
