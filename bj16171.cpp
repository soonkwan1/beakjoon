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
    string word; cin >> word;

    string keyword = "";
    for (int i = 0; i < line.size(); i++) {
        int tmp = int(line[i]);
        if (tmp >= 48 && tmp <= 57) continue;
        keyword += line[i];
    }
    
    int flag = false;
    for (int i = 0; i < keyword.size(); i++) {
        if (i + word.size() > keyword.size()) break;

        if (keyword[i] == word[0]) {
            flag = true;
            for (int j = 1; j < word.size(); j++) {
                if (keyword[i + j] != word[j]) {
                    flag = false;
                    break;
                }
            }
        }
    }

    cout << flag << endl;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
