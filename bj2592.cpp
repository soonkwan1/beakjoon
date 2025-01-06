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
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);
using namespace std;

void INPUT(){
    int appear[991];
    fill_n(appear, 991, 0);

    int total = 0;
    int ans = 0;
    for (int i=0; i<10; i++){
        int tmp; cin >> tmp;
        total += tmp;
        appear[tmp]++;
        ans = appear[tmp] > appear[ans] ? tmp : ans;
    }
    cout << total / 10 << endl;
    cout << ans << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}