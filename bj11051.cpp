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
    int n, k; cin >> n >> k;
    int table[1001][1001];

    table[0][0] = 1;
    table[1][0] = 1;
    table[1][1] = 1;

    for (int i=2; i<=n; i++){
        for (int j=0; j<=i; j++){
            if (j == 0) table[i][0] = 1;
            else if (i == j) table[i][j] = 1;
            else {
                table[i][j] = (table[i-1][j] + table[i-1][j-1]) % 10007;
            }
        }
    }

    cout << table[n][k] << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}