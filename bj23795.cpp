#include <iostream>
using namespace std;

int main() {
	int n, total = 0;

	while (true) {
		cin >> n;
		if (n == -1) {
			break;
		}
		total = total + n;
	}
	cout << total;

	return 0;
}
