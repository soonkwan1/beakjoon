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

struct compString {
    bool operator() (const string& a, const string& b) const {
        if (a.size() != b.size()) return a.size() < b.size();
        return a < b;
    }
};
void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
bool isNumber(char c) {
    int tmp = int(c) - 48;
    if (tmp >= 0 && tmp < 10) return true;
    return false;
}
int toNumber(string line) {
    return stoi(line);
}
string transformString(string line) {
    string tmp = "";
    int state = false;
    for (int i = 0; i < line.size(); i++) {
        if (!state && line[i] == '0') continue;
        state = true;
        tmp += line[i];
    }
    if (tmp.size() == 0) return "0";
    return tmp;
}
void INPUT() {
    int t; cin >> t;
    vector<string> v;
    while (t--) {
        string line; cin >> line;
        
        bool state = false;
        string tmp = "";
        for (int i = 0; i < line.size(); i++) {
            if (!state && isNumber(line[i])) {
                state = true;
                tmp += line[i];
                if (i == line.size() - 1) {
                    string tmp2 = transformString(tmp);
                    if (tmp2 == "") continue;
                    v.push_back(tmp2);
                }
            }
            else if (state && isNumber(line[i])) {
                tmp += line[i];
                if (i == line.size() - 1) {
                    string tmp2 = transformString(tmp);
                    if (tmp2 == "") continue;
                    v.push_back(tmp2);
                }
            }
            else if (state && !isNumber(line[i])) {
                state = false;
                string tmp2 = transformString(tmp);
                if (tmp2 == "") continue;
                v.push_back(tmp2);
                tmp = "";
            }
        }
    }

    sort(v.begin(), v.end(), compString());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}

int main() {
    INIT();
    INPUT();
    return 0;
}
