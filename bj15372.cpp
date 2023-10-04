#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <queue>
#define MOD 1000000007
#define endl "\n"
using namespace std;
void INIT() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
}
void bj15372() {
	int n; cin >> n;
	while (n--) {
		string temp; cin >> temp;
		if (temp.size() >= 6 && temp.size() <= 9) {
			cout << "yes" << endl;
		}
		else cout << "no" << endl;
	}
}
int main() {
	INIT();
	bj15372();
	return 0;
}
