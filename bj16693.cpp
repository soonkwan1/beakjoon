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
    double a1, p1; cin >> a1 >> p1;
    double r1, p2; cin >> r1 >> p2;
    double d1 = a1 / p1;
    double d2 = (r1 * r1 * M_PI) / p2;
    if (d1 > d2) cout << "Slice of pizza" << endl;
    else cout << "Whole pizza" << endl;
}
void SOLUTION(){
    
}

int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}