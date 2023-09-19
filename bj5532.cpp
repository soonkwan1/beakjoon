#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

void INPUT(){
    double l, a, b, c, d; cin >> l >> a >> b >> c >> d;
    cout << l - int(max(ceil(a/c), ceil(b/d))) << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}