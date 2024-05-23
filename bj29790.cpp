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
    int n, u, l; cin >> n >> u >> l;
    if (n >= 1000 && (u >= 8000 || l >= 260)) cout << "Very Good" << endl;
    else if (n >= 1000) cout << "Good" << endl;
    else cout << "Bad" << endl;

}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}