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

int divideNum(int& n){
    vector<int> v;
    while (n > 0){
        v.push_back(n % 10);
        n /= 10;
    }
    int tmp = 1;
    for (int i=0; i<v.size(); i++){
        tmp *= v[i];
    }
    return tmp;
}

void INPUT(){
    int n; cin >> n;
    int ans = 0;
    while (n >= 10){
        ans++;
        n = divideNum(n);
    }
    cout << ans << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}