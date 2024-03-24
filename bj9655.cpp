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
    
}
void SOLUTION(){
    int n; cin >> n;
    cout << (n % 2 == 1 ? "SK" : "CY") << endl;
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}