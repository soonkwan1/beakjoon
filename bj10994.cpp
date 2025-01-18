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


void printTable(char** t, int n) {
    int tmp = 4 * n - 3;
    for (int i = 0; i < tmp; i++) {
        for (int j = 0; j < tmp; j++) {
            cout << t[i][j];
        }
        cout << endl;
    }
}
void INPUT() {
    int n; cin >> n;
    int tmp = 4 * n - 3;
    char** table = new char*[tmp];
    for (int i = 0; i < tmp; i++) {
        table[i] = new char[tmp];
        fill_n(table[i], tmp, ' ');
    }

    int k = 0;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < 4 * i + 1; j++) {
            table[0 + k][j + k] = '*';
            table[4 * i + k][j + k] = '*';
            table[j + k][0 + k] = '*';
            table[j + k][4 * i + k] = '*';
        }
        k += 2;
    }

    printTable(table, n);

    for (int i = 0; i < tmp; i++) delete[] table[i];
    delete[] table;
}



int main() {
    fastio;
    INPUT();
    return 0;
}
