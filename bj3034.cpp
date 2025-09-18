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
    double n, w, h; cin >> n >> w >> h;
    double chk = sqrt(pow(w,2) + pow(h, 2));
    while (n--){
        double k; cin >> k;
        if (k <= chk) cout << "DA" << endl;
        else cout << "NE" << endl;
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