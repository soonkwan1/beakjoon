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
    string n; cin >> n;
    int m; cin >> m;
    int idx = 0;
    int max_idx = n.size() * stoi(n);
    for (int i=0; i<m; i++){
        if (i == max_idx) break;
        cout << n[idx % n.size()];
        idx++;
        if (idx == n.size()) idx = 0;
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