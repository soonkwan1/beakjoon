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
    unordered_map<int, bool> um;
    for (int i=0; i<=31; i++){
        um[pow(2, i)] = true;
    }
    
    int q; cin >> q;
    while (q--){
        int tmp; cin >> tmp;
        cout << um[tmp] << endl;
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