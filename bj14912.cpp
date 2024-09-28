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
    int n, d; cin >> n >> d;
    unordered_map<int, int> um;
    for (int i=1; i<=n; i++){
        string tmp = to_string(i);
        for (int j=0; j<tmp.size(); j++) um[int(tmp[j]) - 48]++;
    }
    cout << um[d] << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}