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
    int x, s; cin >> x >> s;

    int flag = false;
    for (int i=0; i<n; i++){
        int a, b; cin >> a >> b;
        if (a <= x && b > s) {
            flag = true;
        }
    }

    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;

}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}