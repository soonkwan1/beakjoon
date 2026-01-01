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

typedef pair<ll, ll> pll;
pll X,Y,Z;
ll D[3];

int CCW(pll& A, pll& B, pll& C) {
	ll ccw = (B.first - A.first) * (C.second - A.second) - (B.second - A.second) * (C.first - A.first);
	if (ccw > 0) return 1;
	else if (ccw < 0) return -1;
	else return 0;
}

void INPUT(){
    cin >> X.first >> X.second >> Y.first >> Y.second >> Z.first >> Z.second;
	if (CCW(X, Y, Z) == 0) cout << 'X';
	else {
		D[0] = (Y.first - X.first) * (Y.first - X.first) + (Y.second - X.second) * (Y.second - X.second);
		D[1] = (Z.first - X.first) * (Z.first - X.first) + (Z.second - X.second) * (Z.second - X.second);
		D[2] = (Z.first - Y.first) * (Z.first - Y.first) + (Z.second - Y.second) * (Z.second - Y.second);
		sort(D, D + 3);

		if (D[0] == D[1] && D[1] == D[2]) cout << "JungTriangle";
		else if (D[0] + D[1] == D[2]) {
			if (D[0] == D[1]) cout << "Jikkak2Triangle";
			else cout << "JikkakTriangle";
		}
		else if (D[0] + D[1] < D[2]) {
			if (D[0] == D[1]) cout << "Dunkak2Triangle";
			else cout << "DunkakTriangle";
		}
		else {
			if (D[0] == D[1] || D[1] == D[2]) cout << "Yeahkak2Triangle";
			else cout << "YeahkakTriangle";
		}
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