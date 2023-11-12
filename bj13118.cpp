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
    ll pos[4] = {0,};
    for (int i=0; i<4; i++){
        cin >> pos[i];
    }
    
    ll x, y, r; cin >> x >> y >> r;
    int result = 0;
    for (int i=0; i<4; i++){
        if (pos[i] == x) result = i+1;
    }
    cout << result << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}