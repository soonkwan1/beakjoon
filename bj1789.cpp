#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
#define ll long long
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
void INPUT(){
    ll n; cin >> n;
    ll num = 1;
    int cnt = 0;

    ll sum = 0;
    while (true){
        sum += num;
        cnt++;
        if (sum > n){
            cnt--;
            break;
        }
        num++;
        
    }

    cout << cnt << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}