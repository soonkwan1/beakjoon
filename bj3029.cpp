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
    string h1, h2; cin >> h1 >> h2;

    int start_h, start_m, start_s, end_h, end_m, end_s;
    start_h = (int(h1[0]) - 48) * 10 + int(h1[1]) - 48;
    start_m = (int(h1[3]) - 48) * 10 + int(h1[4]) - 48;
    start_s = (int(h1[6]) - 48) * 10 + int(h1[7]) - 48;

    end_h = (int(h2[0]) - 48) * 10 + int(h2[1]) - 48;
    end_m = (int(h2[3]) - 48) * 10 + int(h2[4]) - 48;
    end_s = (int(h2[6]) - 48) * 10 + int(h2[7]) - 48;

    if (end_h < start_h) end_h += 24;

    ll start_time = start_h * 3600 + start_m * 60 + start_s;
    ll end_time = end_h * 3600 + end_m * 60 + end_s;
    int ans = end_time - start_time;
    if (ans == 0) {
        cout << "24:00:00" << endl;
        return;
    }
    int ans_h = ans / 3600; ans %= 3600;
    int ans_m = ans / 60; ans %= 60;
    int ans_s = ans;

    if (ans_h < 10) cout << "0" << ans_h << ":";
    else cout << ans_h << ":";

    if (ans_m < 10) cout << "0" << ans_m << ":";
    else cout << ans_m << ":";

    if (ans_s < 10) cout << "0" << ans_s << endl;
    else cout << ans_s << endl;

}

int main() {
    fastio;
    INPUT();
    return 0;
}
