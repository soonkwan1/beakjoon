#include <iostream>
using namespace std;

const int COUNT = 7;

int main()
{
	int arr[COUNT] = { };
	int n, input;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int min = 101;
		int sum = 0;

		for (int j = 0; j < COUNT; j++)
		{
			cin >> input;
			if (input % 2 == 0)
			{
				arr[j] = input;
				sum += input;
				
				if (min > input)
					min = input;
			}
		}

		cout << sum << " " << min << endl;
	}

	return 0;
}
