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
    int tmp; cin >> tmp;
    int mx = tmp; int mn = tmp;
    for (int i=1; i<n; i++){
        cin >> tmp;
        mx = max(mx, tmp);
        mn = min(mn, tmp);
    }
    cout << mx - mn << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}