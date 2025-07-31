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
    int n; cin >> n;
    string line = "";
    for (int i = 1; i <= n; i++) {
        string tmp = to_string(i);
        for (int j = 0; j < tmp.size(); j++) {
            line.push_back(tmp[j]);
        }
    }
    cout << line.find(to_string(n)) + 1 << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
