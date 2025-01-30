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
    int t; cin >> t;
    unordered_map<string, bool> um;
    vector<string> v; v.push_back("ChongChong");
    um["ChongChong"] = true;
    while (t--) {
        string a, b; cin >> a >> b;
        if (um[a] && !um[b]) {
            um[b] = true;
            v.push_back(b);
        }
        else if (!um[a] && um[b]) {
            um[a] = true;
            v.push_back(a);
        }
    }
    cout << v.size() << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
