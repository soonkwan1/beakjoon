#include <iostream>
#include <string>

using namespace std;

int main()
{
	cin.tie(0); // 코드를 작성하면 입출력 속도가 빨라진다. -> C와 C++ 표준 stream의 동기화를 비활성화
	cout.tie(0); // C++의 입출력인 cin, cout만 사용하도록 주의해야합니다.

	int vote;

	cin >> vote;

	for (int i = 0; i < vote; i++) {

		int n;
		string result;
		cin >> n;

		for (int j = 0; j < n / 5; j++) { // 숫자가 5 이상인 경우 5를 나눠 나온 값만큼 반복 출력
			result = result + "++++ ";
		}

		for (int j = 0; j < n % 5; j++) { // 5를 나눈 나머지는 "|" 출력
			result = result + "|";
		}

		cout << result<<"\n"; 
	}

	return 0;
}
