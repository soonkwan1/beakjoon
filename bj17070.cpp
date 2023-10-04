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
int** setMem(int n) {
	int** temp = new int* [n];
	for (int i = 0; i < n; i++) {
		temp[i] = new int[n];
		for (int j = 0; j < n; j++) {
			cin >> temp[i][j];
		}
	}
	return temp;
}
void freeMem(int** t, int n) {
	for (int i = 0; i < n; i++) delete[] t[i];
	delete[] t;
}
void bfs(int** table, int n) {
	deque<pair<pair<int, int>, int>> nodes;
	nodes.push_back(make_pair(make_pair(0, 1), 0));

	int res = 0;
	while (!nodes.empty()) {
		int x = nodes.front().first.first;
		int y = nodes.front().first.second;
		int s = nodes.front().second;
		nodes.pop_front();

		if (x == n-1 && y == n-1) {
			res++;
			continue;
		}

		if ((x + 1 < n) && (y + 1 < n)) {
			if ((table[x + 1][y] == 0) && (table[x][y + 1] == 0) && (table[x + 1][y + 1] == 0)) {
				nodes.push_back(make_pair(make_pair(x + 1, y + 1), 1));
			}
		}

		// 가로 상태
		if (s == 0) {
			if (y + 1 < n) {
				if (table[x][y + 1] == 0) {
					nodes.push_back(make_pair(make_pair(x, y + 1), 0));
				}
			}
		}
		// 대각선 상태
		else if (s == 1) {
			if (x + 1 < n) {
				if (table[x + 1][y] == 0) {
					nodes.push_back(make_pair(make_pair(x + 1, y), 2));
				}
			}

			if (y + 1 < n) {
				if (table[x][y + 1] == 0) {
					nodes.push_back(make_pair(make_pair(x, y + 1), 0));
				}
			}
		}
		// 세로 상태
		else if (s == 2) {
			if (x + 1 < n) {
				if (table[x + 1][y] == 0) {
					nodes.push_back(make_pair(make_pair(x + 1, y), 2));
				}
			}
		}
	}

	cout << res << endl;
}
void Solution() {
	int n; cin >> n;
	int** table = setMem(n);
	bfs(table, n);
	freeMem(table, n);
}
int main() {
	INIT();
	Solution();
	return 0;
}
