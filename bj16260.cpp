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
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false)

bool isRange(int a, int b, int n, int m) {
    if (a >= n || a < 0) return false;
    if (b >= m || b < 0) return false;
    return true;
}
void bfs(int** table, int n, int m) {
    bool** visited = new bool* [n];
    for (int i = 0; i < n; i++) {
        visited[i] = new bool[m];
        fill_n(visited[i], m, false);
    }

    deque<pair<int, int> > dq;
    dq.push_back(make_pair(n - 1, m - 1));
    visited[n - 1][m - 1] = true;
    table[n - 1][m - 1] = 1;

    int dx[4] = { -1, 1, 0, 0 };
    int dy[4] = { 0, 0, -1, 1 };

    int cnt = 2;
    while (!dq.empty()) {
        int ix = dq.front().first;
        int iy = dq.front().second;
        dq.pop_front();

        for (int i = 0; i < 4; i++) {
            int nx = ix + dx[i];
            int ny = iy + dy[i];
            if (!isRange(nx, ny, n, m) || visited[nx][ny]) continue;
            
            visited[nx][ny] = true;
            table[nx][ny] = cnt++;
            dq.push_back(make_pair(nx, ny));
        }
    }


    for (int i = 0; i < n; i++) delete[] visited[i];
    delete[] visited;
}
void printTable(int** table, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}
void INPUT() {
    int t; cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        int** table = new int* [n];
        for (int i = 0; i < n; i++) {
            table[i] = new int[m];
            fill_n(table[i], m, 0);
        }

        bfs(table, n, m);
        printTable(table, n, m);

        for (int i = 0; i < n; i++) delete[] table[i];
        delete[] table;
    }
}

int main() {
    fastio;
    INPUT();
    return 0;
}
