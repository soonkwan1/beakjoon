#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
using namespace std;

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT() {
    int n; cin >> n;
    int ball = 1;
    for (int i = 0; i < n; i++) {
        int cup1, cup2; cin >> cup1 >> cup2;
        if (cup1 == ball) {
            ball = cup2;
        }
        else if (cup2 == ball) {
            ball = cup1;
        }
    }

    cout << ball << endl;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
