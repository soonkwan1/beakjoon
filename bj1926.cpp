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

int** table;
bool** visited;
int row, col;
int cnt, ans;
void INPUT() {
    cin >> row >> col;
    table = new int* [row];
    visited = new bool* [row];
    for (int i = 0; i < row; i++) {
        table[i] = new int[col];
        visited[i] = new bool[col]; fill_n(visited[i], col, false);
        for (int j = 0; j < col; j++) {
            cin >> table[i][j];
        }
    }
}
void delMem() {
    for (int i = 0; i < row; i++) {
        delete[] table[i];
        delete[] visited[i];
    }
    delete[] table;
    delete[] visited;
}
void printTable() {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}
bool isRange(int x, int y) {
    if (x < 0 || x >= row) return false;
    if (y < 0 || y >= col) return false;
    return true;
}
void bfs(int x, int y) {
    deque<pair<int, int>> dq;
    dq.push_back(make_pair(x, y));
    visited[x][y] = true;

    int dx[4] = { 0, 0, -1, 1 }, dy[4] = { -1, 1, 0, 0 };

    int tmp = 0;
    while (!dq.empty()) {
        tmp++;
        int ix = dq.front().first;
        int iy = dq.front().second;
        dq.pop_front();

        for (int i = 0; i < 4; i++) {
            int nx = ix + dx[i];
            int ny = iy + dy[i];
            if (isRange(nx, ny) && visited[nx][ny] == false && table[nx][ny] == 1) {
                visited[nx][ny] = true;
                dq.push_back(make_pair(nx, ny));
            }
        }
    }
    ans = max(ans, tmp);
}
void SOLUTION() {
    INPUT();

    cnt = 0, ans = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (table[i][j] == 1 && visited[i][j] == false) {
                cnt++;
                bfs(i, j);
            }
        }
    }
    cout << cnt << endl << ans << endl;

    delMem();
}

int main() {
    fastio;
    SOLUTION();
    return 0;
}
