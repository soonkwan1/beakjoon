#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#define endl "\n"
#define ll long long
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

void INPUT(){
	int t; cin >> t;
	while (t--) {
        string s;
		cin >> s;
		int H = stoi(s.substr(0, 2)), M = stoi(s.substr(3, 2)), S = stoi(s.substr(6, 2));

		for (int k = 5; k > -1; k--) {
			if (H & (1 << k)) cout << 1;
			else cout << 0;
			if (M & (1 << k)) cout << 1;
			else cout << 0;
			if (S & (1 << k)) cout << 1;
			else cout << 0;
		}

		cout << ' ';
		for (int k = 5; k > -1; k--) {
			if (H & (1 << k)) cout << 1;
			else cout << 0;
		}
		for (int k = 5; k > -1; k--) {
			if (M & (1 << k)) cout << 1;
			else cout << 0;
		}
		for (int k = 5; k > -1; k--) {
			if (S & (1 << k)) cout << 1;
			else cout << 0;
		}

		cout << '\n';
	}
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}