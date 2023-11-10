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
#include <unordered_set>
#define endl "\n"
#define ll long long
using namespace std;

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT() {
    int n; cin >> n;
    unordered_map<string, int> m;
    unordered_map<string, int> word_appear;
    vector<string> word_list;
    for (int i = 0; i < n; i++) {
        string tmp; cin >> tmp;
        if (word_appear[tmp]) continue;

        word_list.push_back(tmp);
        word_appear[tmp] = 1;

        string start = "";
        for (int j = 0; j < tmp.size(); j++) {
            start += tmp[j];
            m[start]++;
        }
    }

    int ans = 0;
    for (int i = 0; i < word_list.size(); i++) {
        if (m[word_list[i]] == 1) ans++;
    }
    cout << ans << endl;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
