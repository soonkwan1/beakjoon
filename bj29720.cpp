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
    int n, m, k; cin >> n >> m >> k;

    int tmp1 = n - m * k > 0 ? n - m * k : 0;
    int tmp2 = n - m * (k - 1) - 1 > 0 ? n - m * (k - 1) - 1 : 0;

    cout << tmp1 << " " << tmp2 << endl;
    
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}