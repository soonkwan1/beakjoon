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
    while (true) {
        char line; cin >> line;
        if (line == '#') break;
        string tmp; getline(cin, tmp);

        int ans = 0;
        

        for (int i = 0; i < tmp.size(); i++) {
            if (tmp[i] == line) ans++;
            else if (int(line) - 32 == int(tmp[i])) ans++;
        }
        cout << line << " " << ans << endl;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
