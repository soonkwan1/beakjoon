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
    int mx = 0; int mn = 10000;
    int first = 0;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        if (!first) first = tmp;
        mx = max(mx, tmp);
        mn = min(mn, tmp);
    }

    if (first == mx) cout << "hard" << endl;
    else if (first == mn) cout << "ez" << endl;
    else cout << "?" << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}