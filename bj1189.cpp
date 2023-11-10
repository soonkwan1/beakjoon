#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#define endl "\n"
#define ll long long
using namespace std;

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
struct Node {
    int x, y, cost;
};
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };
char** setMem(int r, int c) {
    char** table = new char* [r];
    for (int i = 0; i < r; i++) {
        table[i] = new char[c];
        string tmp; cin >> tmp;
        for (int j = 0; j < c; j++) {
            table[i][j] = tmp[j];
        }
    }
    return table;
}
void printTable(char** table, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}
void freeMem(char** table, int r) {
    for (int i = 0; i < r; i++) delete[] table[i];
    delete[] table;
}
bool** setVisited(int r, int c) {
    bool** visited = new bool* [r];
    for (int i = 0; i < r; i++) {
        visited[i] = new bool[c];
        fill_n(visited[i], c, 0);
    }
    return visited;
}
void freeBool(bool** v, int r) {
    for (int i = 0; i < r; i++) delete[] v[i];
    delete[] v;
}
void bfs(char** table, int r, int c, int k) {
    deque<Node> dq;
    bool** visited = setVisited(r, c);

    visited[0][0] = true;
    dq.push_back({ 0, 0, 1 });

    int ans = 0;
    while (!dq.empty()) {
        int x = dq.front().x;
        int y = dq.front().y;
        int c = dq.front().cost;

        if (x == r - 1 && y == c - 1) {
            if (c == k) ans++;
            continue;
        }
        else if (c >= k) continue;


    }


    freeBool(visited, r);
}
void printBool(bool** table, int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
}
void dfs(char** table, int x, int y, int r, int c, int k, int cost, int& ans, bool** visited) {
    if (x == 0 && y == c - 1) {
        // printBool(visited, r, c);
        if (cost == k) {
            ans++;
            return;
        }
    }
    else if (cost >= k) {
        return;
    }

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < r && ny >= 0 && ny < c) {
            if (table[nx][ny] != 'T') {
                if (visited[nx][ny] == false) {
                    visited[nx][ny] = true;
                    dfs(table, nx, ny, r, c, k, cost + 1, ans, visited);
                    visited[nx][ny] = false;
                }
            }
        }
    }
}
void INPUT() {
    int r, c, k; cin >> r >> c >> k;
    char** table = setMem(r, c);
    bool** visited = setVisited(r, c);

    int ans = 0;
    visited[r - 1][0] = 1;
    dfs(table, r-1, 0, r, c, k, 1, ans, visited);
    cout << ans << endl;

    freeBool(visited, r);
    freeMem(table, r);
}

int main() {
    INIT();
    INPUT();
    return 0;
}
