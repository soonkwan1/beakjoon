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

void INPUT() {
    int n, k; cin >> n >> k;
    int** table = new int* [n];
    for (int i = 0; i < n; i++) {
        table[i] = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> table[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        vector<int> v;
        for (int j = 0; j < n; j++) {
            for (int z = 0; z < k; z++) {
                v.push_back(table[i][j]);
            }
        }

        for (int j = 0; j < k; j++) {
            for (int tmp = 0; tmp < v.size(); tmp++) {
                cout << v[tmp] << " ";
            }
            cout << endl;
        }
    }

    for (int i = 0; i < n; i++) delete[] table[i];
    delete[] table;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
