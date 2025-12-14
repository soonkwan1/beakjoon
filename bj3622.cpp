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
    int A, a, B, b, p; cin >> A >> a >> B >> b >> p;
    bool flag = false;
    
    if (A + B <= p) flag = true;
    else if (a >= B && p >= A) flag = true;
    else if (A <= b && p >= B) flag = true;

    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}