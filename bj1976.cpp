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
    int n; cin >> n;
    int m; cin >> m;
    int* parents = new int[n + 1];
    for (int i = 1; i <= n; i++) parents[i] = i;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int num; cin >> num;
            if (i == j || !num) continue;

            if (num == 1) Union(i, j, parents);
        }
    }

    int flag = 0;
    int start; cin >> start;
    int prev = findParent(start, parents);
    for (int i = 1; i < m; i++) {
        int tmp; cin >> tmp;
        if (findParent(tmp, parents) != prev) {
            flag = 1;
            break;
        }
    }

    if (flag) cout << "NO" << endl;
    else cout << "YES" << endl;

    delete[] parents;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
