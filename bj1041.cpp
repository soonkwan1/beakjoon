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
ll getTwoMin(ll* dice){
    ll ans = 10000;
    ll check[3] = {5, 4, 3};
    for (int i=0; i<6; i++){
        for (int j=i+1; j<6; j++){
            if (j + i == 5) continue;
            ans = min(ans, dice[i] + dice[j]);
        }
    }

    return ans;
}
ll getThreeMin(ll* dice){
    ll check[3] = {5, 4, 3};
    ll ret = 1000000;
    for (int i=0; i<6; i++){
        for (int j=i+1; j<6; j++){
            if (i + j == 5) continue;
            
            for (int k=j+1; k<6; k++){
                if (j + k == 5 || k + i == 5) continue;
                ret = min(ret, dice[i] + dice[j] + dice[k]);
            }
        }
    }
    return ret;
}
void INPUT(){
    ll n; cin >> n;

    ll* dice = new ll[6];
    ll one_min = 51;
    ll one_max = -1;
    ll dice_total = 0;
    for (int i=0; i<6; i++) {
        cin >> dice[i];
        one_min = min(one_min, dice[i]);
        one_max = max(one_max, dice[i]);
        dice_total += dice[i];
    }

    if (n == 1){
        cout << dice_total - one_max << endl;
        delete[] dice;
        return;
    }

    ll three_min = getThreeMin(dice);
    ll two_min = getTwoMin(dice);

    ll ans = 0;
    ans += three_min * 4;
    ans += two_min * (8 * n - 12);
    ans += ( 5 * (ll)n * n - 16 * n + 12) * one_min;

    cout << ans << endl;

    delete[] dice;    
}

int main(){
    INIT();
    INPUT();
    return 0;
}
