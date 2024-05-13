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
    cout << fixed;
    cout.precision(2);
    int n; cin >> n;
    double n1 = 350.34, n2 = 230.90, n3 = 190.55, n4 = 125.30, n5 = 180.9;
    while(n--){
        int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
        cout << "$" << n1 * a + n2 * b + n3 * c + n4 * d + n5 * e << endl;
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