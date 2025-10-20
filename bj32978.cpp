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
    vector<string> v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    unordered_map<string, bool> um;
    for (int i=0; i<n - 1; i++){
        string line; cin >> line;
        um[line] = true;
    }

    for (int i=0; i<n; i++){
        if (!um[v[i]]) {
            cout << v[i] << endl;
            break;
        }
    }
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}