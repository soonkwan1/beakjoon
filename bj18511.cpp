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

struct compMin{
    bool operator() (const int& a, const int& b){
        return a > b;
    }
};
void INPUT(){
    int n, k; cin >> n >> k;
    vector<int> sub(k);
    for (int i=0; i<k; i++) cin >> sub[i];

    deque<int> num;
    while (n){
        num.push_front(n % 10);
        n /= 10;
    }

    sort(sub.begin(), sub.end(), compMin());

    vector<int> ans(num.size());
    for (int i=0; i<ans.size(); i++) ans[i] = -1;

    for (int i=0; i<num.size(); i++){
        for (int j=0; j<sub.size(); j++){
            if (num[i] >= sub[j]){
                ans[i] = j;
                break;
            }
        }


    }
    
    for (int i=0; i<ans.size(); i++){
        // if (ans[i] == -1) continue;
        cout << ans[i] << " ";
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