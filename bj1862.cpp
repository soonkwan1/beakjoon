#include<iostream>
#define ll long long
using namespace std;

string n;
ll ans;
int toD(int num) {
	if (num < 4) return num;
	else return num - 1;
}

int main() {
	cin >> n;
	int base;
	for (int i = 0; i < n.length(); i++) {
		ans = ans * 9 + toD(n[i] - '0');
	}
	
	cout << ans;
}
