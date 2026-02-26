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
    unordered_map<char, int> um;
    for (int i=0; i<6; i++){
        char ch; cin >> ch;
        um[ch]++;
    }

    if (um['W'] >= 5) cout << 1 << endl;
    else if (um['W'] >= 3) cout << 2 << endl;
    else if (um['W'] >= 1) cout << 3 << endl;
    else cout << -1 << endl;
}
void SOLUTION(){
    
}

int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}