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
    int a, b, n; cin >> a >> b >> n;
    
    int res = 0;
    if (a % b == 0) cout << 0 << endl;
    else{
        if (a > b) a = a % b;

        for (int i=0; i<n; i++){
            a *= 10;
            res = (int)(a / b);
            a = a % b;
        }
        cout << res << endl;
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}