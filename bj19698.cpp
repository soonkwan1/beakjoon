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
    int n, w, h, l; cin >> n >> w >> h >> l;
    int tmp1 = w / l;
    int tmp2 = h / l;
    int tmp = tmp1 * tmp2;
    if (tmp > n) cout << n << endl;
    else  cout << tmp << endl;
}

int main(){
    fastio;
    INPUT();
    return 0;
}