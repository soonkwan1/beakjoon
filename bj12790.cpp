#include <iostream>
using namespace std;
int main() {
	int tc;
	cin >> tc;

	int a[8];
	for (int j = 0; j < tc; j++) {
		for (int i = 0; i < 8; i++)
			cin >> a[i];
		a[0] += a[4];
		a[1] += a[5];
		a[2] += a[6];
		a[3] += a[7];

		a[0] < 1 ? a[0] = 1 : 0;
		a[1] < 1 ? a[1] = 1 : 0;
		a[2] < 0 ? a[2] = 0 : 0;

		cout << a[0] * 1 + a[1] * 5 + a[2] * 2 + a[3] * 2 << "\n";
	}
}
