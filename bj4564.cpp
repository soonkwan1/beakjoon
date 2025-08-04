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

int getDiff(int n){
    vector<int> v;
    while (n){
        v.push_back(n % 10);
        n /= 10;
    }
    int ret = v[0];
    for (int i=1; i<v.size(); i++){
        ret *= v[i];
    }
    return ret;
}

void INPUT(){
    while (true){
        int n; cin >> n;
        if (!n) break;

        while (n >= 10){
            cout << n << " ";
            n = getDiff(n);
        }
        cout << n << endl;
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