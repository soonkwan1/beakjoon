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
    int n; cin >> n;
    int k = sqrt(n);
    if (n <= k * k) cout << k << " " << k << endl;
    else if (n <= k * (k + 1)) cout << k + 1 << " " << k << endl;
    else if (n <= (k + 1) * (k + 1)) cout << k + 1 << " " << k + 1 << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}