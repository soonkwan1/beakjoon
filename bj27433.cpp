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
#define fse(A,B,C) for (int i=A; i<B; i+=C)
using namespace std;


void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT(){
    ll fact[21] = {0, };
    fact[0] = 1;
    for (int i=1; i<=20; i++){
        fact[i] = fact[i-1] * i;
    }

    int n; cin >> n;
    cout << fact[n] << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}