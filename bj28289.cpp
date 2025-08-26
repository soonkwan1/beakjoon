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
    int n; cin >> n;
    int first = 0;
    int ans[5] = {0, 0, 0, 0, 0};
    for (int i=0; i<n; i++){
        int a, b, c; cin >> a >> b >> c;
        if (a == 1) ans[0]++;
        else{
            ans[b]++;
        }
    }
    
    cout << ans[1] + ans[2] << endl;
    cout << ans[3] << endl;
    cout << ans[4] << endl;
    cout << ans[0] << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}