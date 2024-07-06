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
    while (n--) {
        string word; cin >> word;
        if (word[word.size() / 2 - 1] == word[word.size() / 2]) cout << "Do-it" << endl;
        else cout << "Do-it-Not" << endl;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
