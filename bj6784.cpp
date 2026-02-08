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
    vector<char> v;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        char ch; cin >> ch;
        v.push_back(ch);
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        char ch; cin >> ch;
        if (ch == v[i]) ans++;
    }
    cout << ans << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
} 
