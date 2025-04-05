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
        int upper = 0;
        for (int i = 0; i < 3; i++) upper += pow(26, i) * (int(word[2 - i]) - 65);
        string num = "";
        for (int i = 4; i < 8; i++) num += word[i];        
        if (abs(stoi(num) - upper) <= 100)  cout << "nice" << endl;
        else cout << "not nice" << endl;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
