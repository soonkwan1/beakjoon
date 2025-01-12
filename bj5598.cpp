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
    string word; cin >> word;
    for (int i = 0; i < word.size(); i++) {
        int tmp = int(word[i]) - 3;
        if (tmp < 65) tmp = 90 + (tmp - 64);
        cout << char(tmp);
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
