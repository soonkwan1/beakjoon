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
    int a, b, n, w; cin >> a >> b >> n >> w;
    int x = 0; int y = 0; int cnt = 0;
    for (int i=1; i<n; i++){
        if (a * i + b * (n - i) == w){
            x = i;
            y = n - i;
            cnt++;
        }
    }
    if (cnt == 1) cout << x << " " << y << endl;
    else cout << -1 << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}