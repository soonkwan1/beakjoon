#include <iostream>
using namespace std;

int table[1001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N, M; cin >> N >> M;
	while (M--) {
		int x, y; cin >> x >> y;
		table[x]++; table[y]++;
	}

	for (int i = 1; i <= N; i++) cout << table[i] << '\n';
}
