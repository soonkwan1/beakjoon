#include <iostream>
using namespace std;

int x, y;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> x >> y;
	if (x > y) cout << "flight";
	else cout << "high speed rail";
}
