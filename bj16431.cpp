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
    int b_posx, b_posy; cin >> b_posx >> b_posy;
    int d_posx, d_posy; cin >> d_posx >> d_posy;
    int j_posx, j_posy; cin >> j_posx >> j_posy;

    int ans1 = abs(j_posx - d_posx) + abs(j_posy - d_posy);
    int ans2 = abs(j_posx - b_posx) + abs(j_posy - b_posy) - min(abs(j_posx - b_posx), abs(j_posy - b_posy));

    if (ans1 < ans2) cout << "daisy" << endl;
    else if (ans2 < ans1) cout << "bessie" << endl;
    else cout << "tie" << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
