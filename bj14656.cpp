#include <iostream>
using namespace std;

int main() {
	int input, a;
	cin >> input;

	int count = 0;

	for (int i = 1; i <= input; i++) {
		cin >> a;
		if (a != i) {
			count++;
		}
	}

    cout << count << endl;
    
	return 0;
}
