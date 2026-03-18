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
    int n, h, v; cin >> n >> h >> v;
    int d1 = 4 * h * v;
    int d2 = 4 * (n - h) * v;
    int d3 = 4 * h * (n - v);
    int d4 = 4 * (n - h) * (n - v);

    cout << max(max(d1, d2), max(d3, d4)) << endl;
}
void SOLUTION(){
    
}

int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}