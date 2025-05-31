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
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string statement = "Simon says";
        string line; getline(cin, line);
        if (line.size() < statement.size()) continue;

        bool flag = true;
        for (int j = 0; j < statement.size(); j++) {
            if (line[j] != statement[j]) {
                flag = false;
                break;
            }
        }

        if (!flag) continue;

        for (int j = statement.size(); j < line.size(); j++) {
            cout << line[j];
        }
        cout << endl;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
