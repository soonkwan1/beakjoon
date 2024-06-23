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
    bool* eratos = new bool[n + 1];
    fill_n(eratos, n + 1, true);
    
    int cnt = 0;
    for (int i = 2; i <= n; i++) {
        if (eratos[i]) {
            for (int j = i; j <= n; j += i) {
                if (!eratos[j]) continue;
                eratos[j] = false;
                cnt++;
                if (cnt == k) {
                    cout << j << endl;
                    delete[] eratos;
                    return;
                }
            }
        }
    }

    delete[] eratos;
}

int main() {
    fastio;
    INPUT();
    return 0;
}
