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
    int n; cin >> n;
    ll answer = 1;

    ll x = 1;
    for (int i=2; i<=n; i++){
        if (i % 6 == 1) answer--;
        else if (i % 6 == 0) x++;
        answer += x;
    }

    cout << answer << endl;
}

int main(){
    fastio;
    INPUT();
    return 0;
}