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
    if (parents[n] == n) return n;
    return parents[n] = findParent(parents[n], parents);
}
void Union(int a, int b, int* parents) {
    int x = findParent(a, parents);
    int y = findParent(b, parents);

    if (x != y) parents[y] = x;
}
void INPUT() {
    int n, m; cin >> n >> m;
    int* parents = new int[n];
    for (int i = 0; i < n; i++) parents[i] = i;
    
    int flag = 0;
    int cnt = 0;
    while (m--) {
        cnt++;
        int n1, n2; cin >> n1 >> n2;
        int n1_parent = findParent(n1, parents);
        int n2_parent = findParent(n2, parents);

        if (n1_parent != n2_parent) Union(n1, n2, parents);
        else {
            flag = 1;
            break;
        }
    }

    if (flag) cout << cnt << endl;
    else cout << 0 << endl;

    delete[] parents;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
