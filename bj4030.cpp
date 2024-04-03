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

int a, b;
int binarySearch(int k, vector<int> v){
    int target = pow(k, 2) - 1;
    int start = 0, end = v.size() - 1;
    while (start <= end){
        int mid = (start + end) / 2;
        if (v[mid] == target) return target;

        if (v[mid] > target){
            end = mid - 1;
        }
        else if (v[mid] < target){
            start = mid + 1;
        }
    }
    return 0;
}
void INPUT(){
    // vector<int> v;
    // for (int i=1; i<1000000; i++){
    //     int tmp = (i * i + 3 * i) / 2 + 1;
    //     if (tmp > pow(10, 9)) break;
    //     v.push_back(tmp);
    // }
    // // for (int i=0; i<100; i++){
    // //     cout << v[i] << " ";
    // // }
    // // cout << endl;

    // vector<int> ans;
    // for (int i=2; i<1000000; i++){
    //     if (pow(i, 2) > pow(10, 9)) break;
    //     int ret = binarySearch(i, v);
    //     if (ret) ans.push_back(ret);
    // }
    // for (int i=0; i<ans.size(); i++){
    //     cout << ans[i] << " ";
    // }
    // cout << endl;
    
    int n_list[12] = {3, 15, 120, 528, 4095, 17955, 139128, 609960, 4726275, 20720703,
    160554240, 703893960};
    int idx = 0;
    while(true){
        cin >> a >> b;
        if (!a && !b) break;
        
        idx++;
        int ans = 0;
        for (int i=0; i<12; i++){
            if (n_list[i] + 1 > a && n_list[i] + 1 < b) ans++;
        }
        cout << "Case " << idx << ": ";
        cout << ans << endl;
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