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
    ll a, b, c; cin >> a >> b >> c;
    ll tmp = a * b * c;

    unordered_map<int, int> um;
    while (tmp){
        um[tmp % 10]++;
        tmp /= 10;
    }

    for (int i=0; i<10; i++){
        cout << um[i] << endl;
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