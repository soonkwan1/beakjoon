#include <iostream>
#define endl "\n"
#define ll long long
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

void INPUT(){
    ll n, k; cin >> n >> k;
    ll total = ((k + 1) * k) / 2;
    n -= total;
    if (n < 0) cout << -1 << endl;
    else{
        if (n % k == 0) cout << k - 1 << endl;
        else cout << k << endl;
    }
}
int main(){
    fastio;
    INPUT();
    return 0;
}