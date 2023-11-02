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
int getCnt(unordered_map<int,int>& l){
    int cnt = 0;
    for (int i=1; i<=10000000; i *= 2){
        l[i*2] += l[i] / 2;
        l[i] %= 2;
        cnt += l[i];
    }
    return cnt;
}
int getCnt2(int n){
    int cnt = 0;
    while (n > 0){
        if (n % 2 == 1){
            cnt++;
        }
        n /= 2;
    }
    return cnt;
}
void INPUT(){
    int n, k; cin >> n >> k;
    int ans = 0;

    while (getCnt2(n) > k){
        n++;
        ans++;
    }

    cout << ans << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}