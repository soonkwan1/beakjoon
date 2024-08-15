#include <iostream>
using namespace std;
int main()
{
	int T; int N; int sum = 0;
	cin >> T;
	for (int i = 0; i < T; ++i)
	{
		cin >> N;
		int** arr = new int* [N]; //N개의 배열 동적할당
		for (int k = 0; k < N; ++k) arr[k] = new int[3];// arr[i]는 각각의 3개의 배열 동적할당
		for (int j = 0; j < N; ++j)
		{
			int dm = 0; 
			for (int k = 0; k < 3; ++k)
			{
				cin >> arr[j][k];
				if (arr[j][k] > dm) dm = arr[j][k]; // 당일 이익 최고가 저장
			}
			sum += dm;
			dm = 0;
		}
		cout << sum << endl;
		sum = 0;
		delete[] arr; //메모리 해제
	}
}
