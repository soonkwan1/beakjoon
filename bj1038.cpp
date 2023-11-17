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
using namespace std;

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
bool isDecre(string num) {
    for (int i = 0; i < num.size() - 1; i++) {
        if (num[i] <= num[i + 1]) return false;
    }
    return true;
}
int charToInt(char a) {
    return int(a);
}
void dfs(int node, string num, int t_len, int& ans, int n) {
    num += to_string(node);

    if (num.size() == t_len) {
        ans++;
        // cout << num << endl;
        if (n == ans) {
            cout << num << endl;
            exit(0);
        }
        return;
    }

    for (int i = 0; i <= charToInt(node) - 1; i++) {
        // string new_num = num + to_string(i);
        dfs(i, num, t_len, ans, n);
    }
}
void INPUT() {
    int n; cin >> n;
    if (!n) {
        cout << 0 << endl;
        return;
    }
    int cnt = 0;
    int ans = 0;
    
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j < 10; j++) {
            string num = "";
            dfs(j, num, i, ans, n);
        }
    }
    cout << -1 << endl;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
