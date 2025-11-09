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
    int n, m, k; cin >> n >> m >> k;
    if (k < 0) k += n;

    int ans = (abs(k-3) % n) + m;

    if (ans > n) ans %= n;
    cout << ans << endl;

}
void SOLUTION(){
    int N, M, K; cin >> N >> M >> K;
    if (K == 3) cout << M;
	else if (K > 3) {
		M += (K - 3);
		if (M % N == 0) cout << N;
		else cout << M % N;
	} 
	else {
		M -= (3 - K);
		while (M <= 0) {
			M += N;
		}
		cout << M;
	}
}
int main(){
    fastio;
    // INPUT();
    SOLUTION();
    return 0;
}