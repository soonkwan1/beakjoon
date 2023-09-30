#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <deque>
#include <queue>
#include <map>
#include <set>
#define endl "\n"
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
vector<int> insu(int n){
    vector<int> ret;
    for (int i=1; i<=sqrt(n); i++){
        if (n % i == 0){
            ret.push_back(i);
            if (n/i != i) ret.push_back(n/i);
        }
    }
    sort(ret.begin(), ret.end());
    return ret;
}
void Solution(int n, int k){
    int ans = 1;
    for (int i=2; i<=n; i++){
        vector<int> list = insu(i);

        if (list.size() == 2){
            if (i <= k){
                // cout << "Num is: " << i << endl;
                ans++;
            }
            continue;
        }

        // cout << "Input num: " << i << endl;
        int insu_max = 0;
        for (int j=list.size()-2; j>=0; j--){
            // cout << "Available: " << list[j] << endl;;
            vector<int> tmp = insu(list[j]);
            if (tmp.size() == 2){
                insu_max = list[j];
                break;
            }
        }

        if (insu_max <= k){
            // cout << "Num is: " << i << endl;
            ans++;
        }
    }
    cout << ans << endl;   
}
void INPUT(){
    int n, k; cin >> n >> k;
    Solution(n, k);
}

int main(){
    INIT();
    INPUT();
    return 0;
}