#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#define ll long long
#define INF 98765432101
#define endl "\n"
using namespace std;

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT() {
    int n; cin >> n;
    ll sum_int = 0;
    ll sq_sum = 0;
    for (int i=1; i<=n; i++){
        sum_int += i;
        sq_sum += i * i * i;
    }
    cout << sum_int << endl;
    cout << sum_int * sum_int << endl;
    cout << sq_sum << endl;
}

int main() {
    INIT();
    INPUT();
    return 0;
}
