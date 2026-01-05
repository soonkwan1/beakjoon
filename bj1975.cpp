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
    int t, n;
	cin >> t;

	while (t--)
	{
		cin >> n;
		int cnt = 0;
		for (int i = 2; i <= n; i++)
		{
			int tmp = n;
			while (tmp % i == 0)
			{
				cnt++;
				tmp /= i;
			}
		}
		cout << cnt << '\n';
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