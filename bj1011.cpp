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
    int t; cin >> t;
    while (t--){
        ll a, b; cin >> a >> b;
        ll length = b - a;

        int d = sqrt(length);

        int move_cnt;
        move_cnt = length == pow(d,2) ? 2 * d - 1 : 2 * d;
        if (length > (pow(d, 2) + pow(d+1, 2)) / 2) move_cnt++;
        cout << move_cnt << endl;
    }
}

int main(){
    INIT();
    INPUT();
    return 0;
}