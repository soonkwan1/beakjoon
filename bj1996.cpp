#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
using namespace std;

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
int** setMem(int n) {
    int** tmp = new int* [n];
    for (int i = 0; i < n; i++) {
        tmp[i] = new int[n];
        string line; cin >> line;
        for (int j = 0; j < n; j++) {
            if (line[j] == '.') {
                tmp[i][j] = 0;
            }
            else {
                tmp[i][j] = int(line[j]) - 48;
            }
        }
    }
    return tmp;
}
int** setEmptyMem(int n) {
    int** tmp = new int* [n];
    for (int i = 0; i < n; i++) {
        tmp[i] = new int[n];
        fill_n(tmp[i], n, 0);
    }
    return tmp;
}
void freeMem(int** t, int n) {
    for (int i = 0; i < n; i++)delete[] t[i];
    delete[] t;
}
void printTable(int** t, int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (t[i][j] == 1e9) {
                cout << "*";
            }
            else if (t[i][j] >= 10) {
                cout << "M";
            }
            else {
                cout << t[i][j];
            }
        }
        cout << endl;
    }
}
void INPUT() {
    int n; cin >> n;
    int** table = setMem(n);
    int** ans = setEmptyMem(n);

    int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (table[i][j] == 0) {
                int temp = 0;
                for (int k = 0; k < 8; k++) {
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                        temp += table[nx][ny];
                    }
                }
                ans[i][j] = temp;
            }
            else {
                ans[i][j] = 1e9;
            }
        }
    }

    printTable(ans, n);

    freeMem(ans, n);
    freeMem(table, n);
}

int main() {
    INIT();
    INPUT();
    return 0;
}
