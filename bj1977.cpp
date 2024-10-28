#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

#define SIZE 10000

int main()
{
	int x, y, k = 0, sum = 0;
	int ar[SIZE] = { 0 };
	scanf("%d", &x);
	scanf("%d", &y);
	for (int i = x; i <= y; i++)
	{
		if ((int)sqrt(i)*sqrt(i) == i)
		{
			ar[k] = i;
			k++;
		}
	}
	for (int i = 0; i < k; i++)
		sum += ar[i];
	if (ar[0] == 0)
		printf("-1");
	else
		printf("%d\n%d", sum, ar[0]);

	return 0;
}
