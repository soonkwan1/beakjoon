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
    int n, x; cin >> n >> x;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    int cnt = 0;
    while (true){
        if (v[cnt] < x){
            cout << cnt + 1 << endl;
            break;
        }
        cnt = cnt == n - 1 ? 0 : cnt + 1;
        x++;
    }
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}