#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() 
{
	int N; cin >> N;
	vector <int> houses(N);

	for (int i = 0; i < N; i++){	cin >> houses[i];   }
	sort(houses.begin(), houses.end());

	int result = N % 2 == 0 ? N / 2 - 1 : N / 2;
	cout << houses[result];
}
