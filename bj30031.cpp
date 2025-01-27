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
    int n; cin >> n;
    int total = 0;
    while (n--) {
        int a, b; cin >> a >> b;
        if (a == 136) total += 1000;
        else if (a == 142) total += 5000;
        else if (a == 148) total += 10000;
        else if (a == 154) total += 50000;
    }
    cout << total << endl;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
