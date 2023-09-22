#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <queue>
#define MOD 1000000007
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
		for (int j = 0; j < n; j++) {
			cin >> tmp[i][j];
		}
	}
	return tmp;
}
void printTable(int** t, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << t[i][j] << " ";
		}
		cout << "\n";
	}
}
void freeMem(int** t, int n) {
	for (int i = 0; i < n; i++) delete[] t[i];
	delete[] t;
}
void bfs(int** table, int start_x, int start_y, int n) {
	int dx[4] = { 0, 0, -1, 1 };
	int dy[4] = { -1, 1, 0, 0 };

	int** visited = new int* [n];
	for (int i = 0; i < n; i++) {
		visited[i] = new int[n];
		fill_n(visited[i], n, 0);
	}

	visited[start_x][start_y] = 1;

	deque<pair<pair<int, int>,int>> nodes;
	nodes.push_back(make_pair(make_pair(start_x, start_y), 0));

	int res = 0;
	while (!nodes.empty()) {
		int x = nodes.front().first.first;
		int y = nodes.front().first.second;
		int c = nodes.front().second;
		nodes.pop_front();

		if (table[x][y] == 2) {
			res = c;
			break;
		}

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
				if (visited[nx][ny] == 0) {
					nodes.push_back(make_pair(make_pair(nx, ny), c + 1));
					visited[nx][ny] = 1;
				}
			}
		}
	}

	freeMem(visited, n);
	cout << res << endl;
}
void bj15686() {
	int n, m; cin >> n >> m;
	int** table = setMem(n);
	
	vector<pair<int, int>> houses;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (table[i][j] == 1) {
				houses.push_back(make_pair(i, j));
			}
		}
	}

	for (int i = 0; i < houses.size(); i++) {
		bfs(table, houses[i].first, houses[i].second, n);
	}

	freeMem(table, n);
}
int main() {
	INIT();
	bj15686();
	return 0;
}
