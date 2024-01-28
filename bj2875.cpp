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
    int team = 0;
    while (m >= 1 && n >= 2){
        team++;
        m--;
        n -= 2;
    }

    k -= n + m;

    while (team > 0 && k > 0){
        team--;
        k -= 3;
    }

    cout << team << endl;
}

int main(){
    fastio;
    INPUT();
    return 0;
}