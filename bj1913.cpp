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


void dfs(int** table, int& x, int& y, int idx, int& cnt) {
    
    table[x][y] = cnt;
    cnt++;
    for (int i = 1; i < idx - 1; i++) {
        y += 1;
        table[x][y] = cnt;
        cnt++;
    }

    for (int i = 1; i < idx; i++) {
        x += 1;
        table[x][y] = cnt;
        cnt++;
    }

    for (int i = 1; i < idx; i++) {
        y -= 1;
        table[x][y] = cnt;
        cnt++;
    }

    for (int i = 1; i < idx; i++) {
        x -= 1;
        table[x][y] = cnt;
        cnt++;
    }
}

void printTable(int** table, int n, int fi) {
    int x, y;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << table[i][j] << " ";
            if (table[i][j] == fi) {
                x = i + 1; y = j + 1;
            }
        }
        cout << endl;
    }
    cout << x << " " << y << endl;
}

void INPUT() {
    int n, tk; cin >> n >> tk;

    int** table = new int* [n];
    for (int i = 0; i < n; i++) {
        table[i] = new int[n];
        for (int j = 0; j < n; j++) {
            table[i][j] = 0;
        }
    }

    int start_x, start_y;
    start_x = n / 2; start_y = n / 2;
    table[start_x][start_y] = 1;
    start_x -= 1;

    int cnt = 2;
    int idx = 3;
    while (start_x != -1) {
        dfs(table, start_x, start_y, idx, cnt);
        idx += 2;
        start_x--;
    }

    printTable(table, n, tk);


    for (int i = 0; i < n; i++) delete[] table[i];
    delete[] table;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
