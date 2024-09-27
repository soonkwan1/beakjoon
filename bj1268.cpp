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
    bool** table = new bool*[n + 1];
    for (int i=0; i<=n; i++) {
        table[i] = new bool[5];
        fill_n(table, n+1, false);
    }

    vector<int>* v = new vector<int>[n + 1];



    for (int i=0; i<=n; i++) delete table[i];
    delete table;
    delete v;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}