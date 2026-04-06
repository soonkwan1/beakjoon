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
    string a, b; cin >> a >> b;
    int a1 = int(a[0]) - 96;
    int a2 = int(a[1]) - 48;
    int b1 = int(b[0]) - 96;
    int b2 = int(b[1]) - 48;
    
    int ans1 = abs(a1 - b1);
    int ans2 = abs(a2 - b2);

    if (ans1 > ans2) swap(ans1, ans2);
    cout << ans1 << " " << ans2 << endl;
}
void SOLUTION(){
    
}

int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}