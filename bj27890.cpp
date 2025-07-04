#include<iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int x, n;
	cin >> x >> n;

	for (int i = 0; i < n; i++) {
		if (x % 2 == 0)
			x = (x / 2) ^ 6;
		else
			x = (2 * x) ^ 6;
	}

	cout << x;

	return 0;
}
