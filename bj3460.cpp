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

void getBinary(int k){
    vector<int> ans;
    while (k > 0){
        if (k % 2 == 0){
            ans.push_back(0);
        }
        else{
            ans.push_back(1);
        }
        k /= 2;
    }
    for (int i=0; i<ans.size(); i++){
        if (ans[i]) cout << i << " ";
    }
    cout << endl;
}
void INPUT(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        getBinary(n);
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