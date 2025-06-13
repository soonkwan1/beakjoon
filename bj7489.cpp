#include<iostream>
#include<algorithm>
using namespace std;

int n, t, ans;

int main()
{
	cin >> t;

	while (t--)
	{
		cin >> n;
		ans = 1;

		for (int i = 1; i <= n; i++)
		{
			ans *= i;
			ans %= 100000;
			while (ans % 10 == 0)
				ans /= 10;
		}
		cout << ans % 10 << '\n';
	}
}
