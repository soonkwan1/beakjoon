#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <queue>
#define MOD 1000000007
#define endl "\n"
using namespace std;
void INIT() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
}
int** setMem(int n, int r) {
	int** temp = new int*[n + 1];
	for (int i = 0; i <= n; i++) {
		temp[i] = new int[n + 1];
		fill_n(temp[i], n + 1, 1e9);
	}

	for (int i = 0; i < r; i++) {
		int start, end, cost; cin >> start >> end >> cost;
		temp[start][end] = cost;
		temp[end][start] = cost;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			for (int k = 1; k <= n; k++) {
				if (temp[j][i] + temp[i][k] < temp[j][k]) {
					temp[j][k] = temp[j][i] + temp[i][k];
				}
			}
		}
	}

	return temp;
}
void freeMem(int** t, int n) {
	for (int i = 0; i <= n; i++) delete[] t[i];
	delete[] t;
}
void Solution() {
	int n, m, r; cin >> n >> m >> r;
	int* items = new int[n + 1];
	for (int i = 1; i <= n; i++) cin >> items[i];
	
	int** table = setMem(n, r);
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		int temp = items[i];
		for (int j = 1; j <= n; j++) {
			if (i == j) continue;
			if (table[i][j] <= m) temp += items[j];
		}

		ans = max(ans, temp);
	}

	cout << ans << endl;

	freeMem(table, n);
	delete[] items;
}
int main() {
	INIT();
	Solution();
	return 0;
}
