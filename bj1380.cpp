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
void bj16236() {
	int scenario = 1;
	while (true) {
		int n; cin >> n;
		if (n == 0) break;
		
		cin.ignore();
		vector<string> name_list;
		for (int i = 0; i < n; i++) {
			string name; getline(cin, name);
			name_list.push_back(name);
		}

		int* cnt = new int[n + 1];
		fill_n(cnt, n + 1, 0);
		for (int i = 0; i < 2 * n - 1; i++) {
			int who; string item; cin >> who >> item;
			cnt[who]++;
		}

		int idx = 0;
		for (int i = 1; i <= n; i++) {
			if (cnt[i] == 1) {
				idx = i;
				break;
			}
		}

		cout << scenario++ << " " << name_list[idx - 1] << "\n";
		delete[] cnt;
	}
}
int main() {
	INIT();
	bj16236();
	return 0;
}
