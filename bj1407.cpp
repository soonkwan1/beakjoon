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

ll getNum(ll a){
    if (a == 0) return 0;
    else if (a == 1) return 1;
    else if (a % 2 == 0) return 2 * getNum(a/2) + a/2;
    else return 2 * getNum(a/2) + a/2 + 1;
}

void INPUT(){
    ll A, B; cin >> A >> B;
    cout << getNum(B) - getNum(A-1) << endl;
}

int main(){
    fastio;
    INPUT();
    return 0;
}