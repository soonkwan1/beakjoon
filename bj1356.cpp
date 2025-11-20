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
    while (n){
        v.push_back(n % 10);
        n /= 10;
    }

    bool flag = false;
    for (int i=1; i<v.size(); i++){
        int n1 = 1; int n2 = 1;
        for (int j=0; j<i; j++){
            n1 *= v[j];
        }
        for (int j=i; j<v.size(); j++){
            n2 *= v[j];
        }

        if (n1 == n2) {
            flag = true;
            break;
        }
    }

    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}