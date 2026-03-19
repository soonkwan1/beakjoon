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
    string line; cin >> line;
    int sa = 0, sb = 0;
    for (int i = 0; i < line.size(); i += 2) {
        if (line[i] == 'A') sa += int(line[i + 1]) - int('0');
        else sb += int(line[i + 1]) - int('0');

        if (sa >= 11 && sa - sb >= 2) {
            cout << "A" << endl;
            break;
        }
        else if (sb >= 11 && sb - sa >= 2) {
            cout << "B" << endl;
            break;
        }
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
} 
