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
        string line; getline(cin, line);
        string tmp = "";

        vector<string> v;
        for (int j = 0; j < line.size(); j++) {
            if (line[j] == ' ') {
                v.push_back(tmp);
                tmp = "";
            }
            else {
                tmp += line[j];
            }
        }
        v.push_back(tmp);

        for (int j = 2; j < v.size(); j++) {
            cout << v[j] << " ";
        }
        cout << v[0] << " " << v[1] << endl;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
