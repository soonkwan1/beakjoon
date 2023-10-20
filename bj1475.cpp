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
    string num = to_string(n);
    
    int cnt[10] = { 0, };
    for (int i = 0; i < num.size(); i++) {
        int tmp = int(num[i]) - 48;
        if (tmp == 9) cnt[6]++;
        else cnt[tmp]++;
    }
    cnt[6] = cnt[6] % 2 == 1 ? cnt[6] / 2 + 1 : cnt[6] / 2;

    int m = 0;
    for (int i = 0; i < 10; i++) {
        if (cnt[i] > m) {
            m = cnt[i];
        }
    }

    cout << m << endl;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
