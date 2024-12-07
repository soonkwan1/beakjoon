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
#include <math.h>
#define ll long long
#define INF 98765432101
#define endl "\n"
using namespace std;
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);

void INPUT() {
    double d, h, w; cin >> d >> h >> w;
    double tmp = d / sqrt(pow(h, 2) + pow(w, 2));
    cout << int(tmp * h) << " " << int(tmp * w) << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
