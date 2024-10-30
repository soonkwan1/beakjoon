#include <iostream>
using namespace std;

int N;
int old = -1, cur;
int ans;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	while (N--) {
		cin >> cur;
		if (cur > old + 1) ans += cur;
		old = cur;
	}

	cout << ans;
}
