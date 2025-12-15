#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	vector<int> vector;
	long long a, b, max = 0;
	cin >> a >> b;

	max = a > b ? a : b;

	while(max > 0){
		int temp = a % 10 + b % 10;
		a /= 10;
		b /= 10;
		max /= 10;
		vector.push_back(temp);
	}

	for(int i = vector.size() - 1; i >= 0; i--){
		cout << vector[i];
	}

}
