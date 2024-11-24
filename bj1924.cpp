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
    int x, y; cin >> x >> y;
    int month[13] = { 0, 31,28,31,30,31,30,31,31,30,31,30,31 };
    string week[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

    int total = y;
    for (int i = 0; i < x; i++) total += month[i];
    
    cout << week[total % 7] << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
