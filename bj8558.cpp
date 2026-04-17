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
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    for (int i=2; i<=n; i++){
        v.push_back((v[i-1] * i) % 10);
    }
    cout << v[n] << endl;
}
void SOLUTION(){
    
}

int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}