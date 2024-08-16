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
    vector<int> odd, even;
    for (int i = 0; i < 3; i++) {
        int tmp; cin >> tmp;
        if (tmp % 2 == 0) even.push_back(tmp);
        else odd.push_back(tmp);
    }

    if (odd.size() == 3) cout << odd[0] * odd[1] * odd[2] << endl;
    else if (odd.size() == 2)  cout << odd[0] * odd[1] << endl;
    else if (odd.size() == 1) cout << odd[0] << endl;
    else cout << even[0] * even[1] * even[2] << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
