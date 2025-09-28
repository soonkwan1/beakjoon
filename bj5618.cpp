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

void getAns(int k, vector<int>& v){
    for (int i=1; i<=sqrt(k); i++){
        if (k % i == 0){
            v.push_back(i);
            if (k / i != i) v.push_back(k / i);
        }
    }
}
vector<int> checkAns(int k, vector<int> v){
    vector<int> tmp;
    for (int i=0; i<v.size(); i++){
        if (k % v[i] == 0) tmp.push_back(v[i]);
    }
    return tmp;
}
void INPUT(){
    int n; cin >> n;
    vector<int> ans;
    int tmp; cin >> tmp;
    getAns(tmp, ans);

    for (int i=1; i<n; i++){
        cin >> tmp;
        ans = checkAns(tmp, ans);
    }
    sort(ans.begin(), ans.end());
    for (int i=0; i<ans.size(); i++){
        cout << ans[i] << endl;
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