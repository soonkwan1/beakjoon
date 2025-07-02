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
    int a, b, c, d, p; cin >> a >> b >> c >> d >> p;
    int ans1 = a * p;
    int ans2;
    if (p <= c){
        ans2 = b;
    }
    else{
        ans2 = b + (p - c) * d;
    }
    cout << min(ans1, ans2) << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}