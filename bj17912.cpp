#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <unordered_set>
#include <unordered_map>
#define ll long long
#define INF 98765432101
#define endl "\n"
using namespace std;
#define fastio cin.tie(NULL), cout.tie(NULL), ios_base::sync_with_stdio(false);

void INPUT() {
    int n; cin >> n;
    vector<int> v(n);
    int mn = 1000000001;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        mn = min(mn, v[i]);
    }
    for (int i = 0; i < n; i++) {
        if (v[i] == mn) {
            cout << i << endl;
            break;
        }
    }
    
}

int main() {
    fastio;
    INPUT();
    return 0;
} 
