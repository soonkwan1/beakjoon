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
    while (true) {
        string line; getline(cin, line);
        if (line == "*") break;

        unordered_map<char, bool> um;
        for (int i = 0; i < line.size(); i++) {
            if (line[i] == ' ') continue;
            um[int(line[i]) - 97] = true;
        }

        int flag = 1;
        for (int i = 0; i < 26; i++) {
            if (!um[i]) {
                flag = 0; break;
            }
        }

        if (flag) cout << "Y" << endl;
        else cout << "N" << endl;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
} 
