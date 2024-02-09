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

int n, l;
int** table;

void getTable() {
    table = new int* [n];
    for (int i = 0; i < n; i++) {
        table[i] = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> table[i][j];
        }
    }
}
void freeTable() {
    for (int i = 0; i < n; i++) delete[] table[i];
    delete[] table;
}
bool isSameFloor(int k, int s, int e) {
    int ref = table[k][s];
    for (int i = s + 1; i <= e; i++) {
        if (table[k][i] != ref) return false;
    }
    return true;
}
bool isSameFloorC(int k, int s, int e) {
    int ref = table[s][k];
    for (int i = s + 1; i <= e; i++) {
        if (table[i][k] != ref) return false;
    }
    return true;
}
bool isUsed(bool* u, int s, int e) {
    for (int i = s; i <= e; i++) {
        if (u[i]) return false;
    }
    return true;
}
int rowCheck() {
    int ret = 0;
    for (int i = 0; i < n; i++) {
        bool flag = true;
        bool* used = new bool[n]; fill_n(used, n, false);
        for (int j = 0; j < n - 1; j++) {
            if (table[i][j] == table[i][j + 1]) {
                continue;
            }
            // 현재 위치가 다음 위치보다 낮다
            else  if (table[i][j] == table[i][j + 1] - 1) {
                if (j - l + 1 >= 0 && isSameFloor(i, j - l + 1, j) && isUsed(used, j - l + 1, j)) {
                    continue;
                }
                else {
                    flag = false;
                    break;
                }
            }
            // 현재 위치가 다음 위치보다 높다
            else if (table[i][j] == table[i][j + 1] + 1) {
                if (j + l < n && isSameFloor(i, j + 1, j + l) && isUsed(used, j + 1, j + l)) {
                    for (int k = j + 1; k <= j + l; k++) {
                        used[k] = true;
                    }
                    j = j + l - 1;
                }
                else {
                    flag = false;
                    break;
                }
            }
            // 층고가 2이상 차이남
            else {
                flag = false;
                break;
            }
        }

        if (flag) {
            ret++;
            // cout << i << endl;
        }
        delete[] used;
    }

    return ret;
}
int colCheck() {
    int ret = 0;
    for (int i = 0; i < n; i++) {
        bool flag = true;
        bool* used = new bool[n]; fill_n(used, n, false);
        for (int j = 0; j < n - 1; j++) {
            if (table[j][i] == table[j + 1][i]) {
                continue;
            }
            // 현재 위치가 다음 위치보다 낮다
            else  if (table[j][i] == table[j + 1][i] - 1) {
                if (j - l + 1 >= 0 && isSameFloorC(i, j - l + 1, j) && isUsed(used, j - l + 1, j)) {
                    continue;
                }
                else {
                    flag = false;
                    break;
                }
            }
            // 현재 위치가 다음 위치보다 높다
            else if (table[j][i] == table[j + 1][i] + 1) {
                if (j + l < n && isSameFloorC(i, j + 1, j + l) && isUsed(used, j + 1, j + l)) {
                    for (int k = j + 1; k <= j + l; k++) {
                        used[k] = true;
                    }
                    j = j + l - 1;
                }
                else {
                    flag = false;
                    break;
                }
            }
            // 층고가 2이상 차이남
            else {
                flag = false;
                break;
            }
        }

        if (flag) {
            ret++;
            // cout << i << endl;
        }
        delete[] used;
    }

    return ret;
}
void INPUT() {
    cin >> n >> l;
    getTable();
    cout << rowCheck() + colCheck() << endl;
    freeTable();
}

int main() {
    fastio;
    INPUT();
    return 0;
}
