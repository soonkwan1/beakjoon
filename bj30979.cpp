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
    int t; cin >> t;
    int n; cin >> n;
    int total = 0;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        total += tmp;
    }

    if (total >= t) cout << "Padaeng_i Happy" << endl;
    else cout << "Padaeng_i Cry" << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}