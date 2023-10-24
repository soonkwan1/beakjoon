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
int findParent(int n, int* parents) {
    if (parents[n] == n) {
        return n;
    }
    return parents[n] = findParent(parents[n], parents);
}
void Union(int a, int b, int* parents) {
    int x = findParent(a, parents);
    int y = findParent(b, parents);

    parents[y] = x;
}
void INPUT() {
    int n, m; cin >> n >> m;
    int* parents = new int[n + 1];
    for (int i = 1; i <= n; i++) parents[i] = i;

    while (m--) {
        int cmd, a, b; cin >> cmd >> a >> b;
        if (!cmd) Union(a, b, parents);
        else {
            if (findParent(a, parents) == findParent(b, parents)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }

    delete[] parents;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
