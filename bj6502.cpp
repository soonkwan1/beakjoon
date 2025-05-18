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
    int cnt = 1;
    while (true){
        double r, w, l; cin >> r;
        if (!r) break;
        cin >> w >> l;

        double chk = sqrt(pow(w / 2, 2) + pow(l / 2, 2));
        if (r >= chk) cout << "Pizza " << cnt << " fits on the table." << endl;
        else cout << "Pizza " << cnt << " does not fit on the table." << endl;

        cnt++;
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