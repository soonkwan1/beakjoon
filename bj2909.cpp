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

void getRound(ll& k){
    ll t = k;
    vector<ll> v;
    while (t){
        v.push_back(t % 10);
        t /= 10;
    }

    ll tmp = 0;
    for (int i=0; i<v.size(); i++){
        if (v[i] != 0){
            if (v[i] < 5) tmp = - v[i] * pow(10, i);
            else tmp = (10 - v[i]) * pow(10, i);
            break;
        }
    }
    k += tmp;
}

void INPUT(){
    ll c, k; cin >> c >> k;
    k = pow(10, k);
    while (c){
        if (c % k == 0) {
            cout << c << endl;
            return;
        }
        getRound(c);
    }
    cout << c << endl;
}
void SOLUTION(){
    int n,k;
	cin >> n >> k;
	
	int tmp = pow(10,k);
	int n1;
	n1 = n % tmp;
	n1 >= pow(10, k) / 2 ? n = n+(pow(10, k)-n1) : n = n - n1;
	cout << n;
}
int main(){
    fastio;
    INPUT();
    // SOLUTION();
    return 0;
}