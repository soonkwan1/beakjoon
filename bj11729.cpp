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

void hanoiMove(int curr, int to, int n){
    if (n == 1){
        cout << curr << " " << to << endl;
    }
    else{
        hanoiMove(curr, 6 - curr - to, n-1);
        cout << curr << " " << to << endl;
        hanoiMove(6 - curr - to, to, n-1);
    }
}

void INPUT(){
    int n; cin >> n;
    cout << (1 << n) - 1 << endl;
    hanoiMove(1, 3, n);

}

int main(){
    fastio;
    INPUT();
    return 0;
}