#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <queue>
using namespace std;

void INIT() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
}
void bj1987_dfs(char** table, map<char, int> list, int x, int y, int r, int c, int w, int* res, int* visit) {
	*res = max(*res, w);

	int dx[4] = {0, 0, -1, 1};
	int dy[4] = { -1, 1, 0, 0 };

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < r && ny >= 0 && ny < c) {
			if (list[table[nx][ny]] == 0) {
				visit[table[nx][ny] - 'A'] = 1;
				bj1987_dfs(table, list, nx, ny, r, c, w+1, res, visit);
				visit[table[nx][ny] - 'A'] = 0;
			}
		}
	}
}
void bj1987_dfs2(char** table, int x, int y, int r, int c, int w, int* res, int* visit) {
	*res = max(*res, w);

	int dx[4] = {0, 0, -1, 1};
	int dy[4] = { -1, 1, 0, 0 };

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx >= 0 && nx < r && ny >= 0 && ny < c) {
			if (visit[table[nx][ny] - 'A'] == 0) {
				visit[table[nx][ny] - 'A'] = 1;
				bj1987_dfs2(table, nx, ny, r, c, w+1, res, visit);
				visit[table[nx][ny] - 'A'] = 0;
			}
		}
	}
}
void bj1987() {
	map<char, int> list;
	for (int i = 0; i < 26; i++) {
		list[char(i + 65)] = 0;
	}
	
	int row, col; cin >> row >> col;
	char** table = new char* [row];
	for (int i = 0; i < row; i++) {
		table[i] = new char[col];
		for (int j = 0; j < col; j++) {
			cin >> table[i][j];
		}
	}

	int res = 0;
	int visit[26] = {0, };
	// bj1987_dfs(table, list, 0, 0, row, col, 1, &res, visit);
	visit[table[0][0] - 'A'] = 1;
	bj1987_dfs2(table, 0, 0, row, col, 1, &res, visit);
	cout << res << "\n";

	for (int i = 0; i < row; i++) {
		delete[] table[i];
	}
	delete[] table;
}

int main() {
	INIT();
	bj1987();
	return 0;
}
