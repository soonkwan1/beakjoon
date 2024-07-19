#include <iostream>
using namespace std;
int main() {
	int n, m;

	cin >> n >> m;
	int a, b;
	int tmp = m;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		m = m + a - b;
		if (m < 0)
		{
			tmp = 0;
			break;
		}
		if (m >= tmp)
			tmp = m;
	}
	cout << tmp;
}
