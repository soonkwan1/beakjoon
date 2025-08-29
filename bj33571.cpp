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
    string line; getline(cin, line);

    int ans = 0;
    char ch1[15] = { 'A', 'a', 'b', 'D', 'd', 'e', 'g', 'O', 'o', 'P', 'p', 'Q', 'q', 'R', '@'};
    char ch2 = 'B';
    for (int i = 0; i < line.size(); i++) {
        if (line[i] == ch2) ans += 2;
        else {
            for (int j = 0; j < 15; j++) {
                if (line[i] == ch1[j]) ans++;
            }
        }
    }

    cout << ans << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
