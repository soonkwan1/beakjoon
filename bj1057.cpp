#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#define endl "\n"
#define ll long long
using namespace std;

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT() {
    int n, a, b; cin >> n >> a >> b;
    int round = 1;
    if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    while (true) {
        if (b - a == 1 && a % 2 == 1) {
            cout << round << endl;
            break;
        }
        round++;

        if (a % 2 == 0) a /= 2;
        else a = a / 2 + 1;
        
        if (b % 2 == 0) b /= 2;
        else b = b / 2 + 1;
    }
}

int main() {
    INIT();
    INPUT();
    return 0;
}

// 16816
