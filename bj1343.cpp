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
void bj15686() {
	string line; cin >> line;

	for (int i = 0; i < line.size(); i++) {
		if (line[i] == 'X') {
			if (i + 3 < line.size()) {
				if (line[i + 1] == 'X' && line[i + 2] == 'X' &&
					line[i + 3] == 'X') {
					line[i] = 'A';
					line[i + 1] = 'A';
					line[i + 2] = 'A';
					line[i + 3] = 'A';
				}
			}

			if (i + 1 < line.size()) {
				if (line[i + 1] == 'X') {
					line[i] = 'B';
					line[i + 1] = 'B';
				}
			}
		}
	}

	for (int i = 0; i < line.size(); i++) {
		if (line[i] == 'X') {
			cout << -1 << endl;
			return;
		}
	}
	cout << line << endl;

}
int main() {
	INIT();
	bj15686();
	return 0;
}
