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
    vector<int> va(10), vb(10);
    for (int i = 0; i < 10; i++) cin >> va[i];
    for (int i = 0; i < 10; i++) cin >> vb[i];
    int a_score = 0, b_score = 0;
    for (int i = 0; i < 10; i++) {
        if (va[i] > vb[i]) a_score++;
        else if (vb[i] > va[i]) b_score++;
    }

    if (a_score > b_score) cout << "A" << endl;
    else if (b_score > a_score) cout << "B" << endl;
    else cout << "D" << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
