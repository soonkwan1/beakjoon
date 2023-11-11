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
int** getTable() {
    int** table = new int* [10];
    for (int i = 1; i < 10; i++) {
        table[i] = new int[10];
        string line; cin >> line;
        for (int j = 1; j <= 9; j++) {
            table[i][j] = int(line[j - 1]) - 48;
        }
    }
    return table;
}
void freeTable(int** t) {
    for (int i = 0; i < 10; i++) delete[] t[i];
    delete[] t;
}
void printTable(int** t) {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) cout << t[i][j];
        cout << endl;
    }
}
int** getRow(int** t) {
    int** table = new int* [10];
    for (int i = 1; i <= 9; i++) {
        table[i] = new int[10];
        fill_n(table[i], 10, 0);
        for (int j = 1; j <= 9; j++) {
            if (!t[i][j]) continue;
            table[i][t[i][j]]++;
        }
    }
    return table;
}
int** getCol(int** t) {
    int** table = new int* [10];
    for (int i = 1; i <= 9; i++) {
        table[i] = new int[10];
        fill_n(table[i], 10, 0);
        for (int j = 1; j <= 9; j++) {
            if (!t[j][i]) continue;
            table[i][t[j][i]]++;
        }
    }
    return table;
}
int** getDia(int** t) {
    int** table = new int* [10];
    for (int i = 1; i <= 9; i++) {
        table[i] = new int[10];
        fill_n(table[i], 10, 0);
    }

    int row_cnt = 1;
    for (int i = 1; i <= 9; i += 3) {
        for (int j = 1; j <= 9; j += 3) {

            for (int k1 = 0; k1 < 3; k1++) {
                for (int k2 = 0; k2 < 3; k2++) {
                    table[row_cnt][t[i + k1][j + k2]]++;
                }
            }
            row_cnt++;
        }
    }
    return table;
}
int quarter(int x, int y) {
    if (x <= 3 && y <= 3) return 1;
    if (x <= 3 && y <= 6) return 2;
    if (x <= 3 && y <= 9) return 3;

    if (x <= 6 && y <= 3) return 4;
    if (x <= 6 && y <= 6) return 5;
    if (x <= 6 && y <= 9) return 6;

    if (x <= 9 && y <= 3) return 7;
    if (x <= 9 && y <= 6) return 8;
    if (x <= 9 && y <= 9) return 9;
}
int solution(int** table, int** row, int** col, int** dia, int x, int y) {
    if (y > 9) y = 1, x++;
    if (x > 9) return 1;

    if (table[x][y]) return solution(table, row, col, dia, x, y + 1);

    for (int k = 1; k <= 9; k++) {
        if (row[x][k] || col[y][k] || dia[quarter(x, y)][k]) continue;

        table[x][y] = k;
        row[x][k] = col[y][k] = dia[quarter(x, y)][k] = 1;

        if (solution(table, row, col, dia, x, y + 1)) return 1;
        
        table[x][y] = 0;
        row[x][k] = col[y][k] = dia[quarter(x, y)][k] = 0;
    }
    return 0;
}
void sudoku(int** table) {
    int** row_check = getRow(table);
    int** col_check = getCol(table);
    int** dia_check = getDia(table);
    
    solution(table, row_check, col_check, dia_check, 1, 1);
    printTable(table);

    freeTable(dia_check);
    freeTable(col_check);
    freeTable(row_check);
}
void INPUT() {
    int** table = getTable();
    sudoku(table);
    freeTable(table);
}
int main() {
    INIT();
    INPUT();
    return 0;
}
