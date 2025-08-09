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

int getDigit(char a) {
    int tmp = int(a);
    int ret = 0;
    while (tmp) {
        ret += tmp % 10;
        tmp /= 10;
    }
    return ret;
}

void INPUT() {
    string line; cin >> line;
    for (int i = 0; i < line.size(); i++) {
        int tmp = getDigit(line[i]);
        for (int j = 0; j < tmp; j++) {
            cout << line[i];
        }
        cout << endl;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
