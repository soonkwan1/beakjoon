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
    while (t--){
        int a, b; cin >> a >> b;
        int tmp;
        if (a % b == 0) tmp = a / b;
        else tmp = a / b + 1;

        cout << tmp * (tmp + 1) / 2 + tmp * (tmp - 1) / 2 << endl;
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