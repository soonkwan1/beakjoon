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

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT() {
    vector<int> books;
    int n, m; cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        books.push_back(tmp);
    }

    int ans = 0;
    int capa = m;
    
    while (!books.empty()) {
        capa -= books.back();

        if (capa < 0) {
            capa = m;
            ans++;
        }
        else {
            books.pop_back();
        }
    }
    if (n) ans++;

    cout << ans << endl;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
