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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int cnt1 = a + d;
    int cnt2 = b + c;
    int ans = cnt1 > cnt2 ? cnt2 : cnt1;
    cout << ans << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}