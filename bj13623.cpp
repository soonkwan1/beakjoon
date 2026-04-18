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
    int a, b, c; cin >> a >> b >> c;
    if (a != b && a != c) cout << "A" << endl;
    else if (b != a && b != c) cout << "B" << endl;
    else if (c != a && c != b) cout << "C" << endl;
    else cout << "*" << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
} 
