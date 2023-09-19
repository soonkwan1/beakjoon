#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
long long calMod(long long a, int b, long long c){
    if (b == 1)return a % c;

    long long tmp = calMod(a, b/2, c) % c;
    if (b % 2 == 1) return tmp * tmp%c * a%c;
    else return tmp * tmp % c;
}
void INPUT(){
    long long a, b, c; cin >> a >> b >> c;
    cout << calMod(a, b, c) << "\n";
}

int main(){
    INIT();
    INPUT();
    return 0;
}