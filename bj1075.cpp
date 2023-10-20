#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
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
    ll n, f; cin >> n >> f;
    n = (n / 100) * 100;
    
    for (int i = 0; i < 100; i++) {
        if ((n + i) % f == 0) {
            if (i < 10) {
                cout << 0 << i << endl;
            }
            else {
                cout << i << endl;
            }
            break;
        }
    }
}

int main() {
    INIT();
    INPUT();
    return 0;
}
