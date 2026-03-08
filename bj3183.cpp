#include <iostream>
using namespace std;

int Y, M, D;
int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> D >> M >> Y;
	while (D + M + Y) {
		bool chk = 1;
		if (M < 1 || M > 12) chk = 0;
		else if (M == 2) {
			if (Y % 4 == 0 && (Y % 100 || Y % 400 == 0)) {
				if (D < 1 || D > 29) chk = 0;
			}
			else {
				if (D < 1 || D > 28) chk = 0;
			}
		}
		else {
			if (D < 1 || D > days[M]) chk = 0;
		}

		if (chk) cout << "Valid\n";
		else cout << "Invalid\n";

		cin >> D >> M >> Y;
	}
}
