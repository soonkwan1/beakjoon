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
    vector<int> v(4);
    for (int i = 0; i < 4; i++) cin >> v[i];

    if (v[0] == v[1] && v[1] == v[2] && v[2] == v[3]) cout << "Fish At Constant Depth" << endl;
    else if (v[0] > v[1] && v[1] > v[2] && v[2] > v[3]) cout << "Fish Diving" << endl;
    else if (v[0] < v[1] && v[1] < v[2] && v[2] < v[3]) cout << "Fish Rising" << endl;
    else cout << "No Fish" << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
} 
