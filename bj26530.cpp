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
    cout.precision(2);
    cout << fixed;
    
    while (n--){
        int k; cin >> k;
        string name;
        double a, b;
        double ans = 0;
        for (int i=0; i<k; i++){
            cin >> name >> a >> b;
            ans += a * b;
        }
        cout << "$" << ans << endl;
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