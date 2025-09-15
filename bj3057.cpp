#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#define endl "\n"
#define ll long long
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

struct compMax {
    bool operator() (const int& a, const int& b) const {
        return a > b;
    }
};
void INPUT() {
    vector<int> v(3);
    for (int i = 0; i < 3; i++) cin >> v[i];
    sort(v.begin(), v.end(), compMax());
    unordered_map<char, int> um;
    um['A'] = v[2];
    um['B'] = v[1];
    um['C'] = v[0];
    string line; cin >> line;
    for (int i = 0; i < line.size(); i++) {
        cout << um[line[i]] << " ";
    }
}
void SOLUTION() {

}

int main() {
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}
