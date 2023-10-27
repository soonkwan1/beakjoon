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
#define ll long long
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}

int binarySearch(vector<int> ans, int target){
    int start = 0; int end = ans.size() - 1;
    int mid;
    while (start < end){
        mid = (start + end) / 2;
        if (ans[mid] >= target) end = mid;
        else start = mid + 1;
        
    }
    return end;
}

void INPUT(){
    int n; cin >> n;
    // int* num_list = new int[n];
    vector<int> num_list;
    for (int i=0; i<n; i++) {
        int t; cin >> t;
        num_list.push_back(t);
    }

    vector<int> ans;
    ans.push_back(num_list.front());
    for (int i=1; i<n; i++){
        if (ans.back() < num_list[i]){
            ans.push_back(num_list[i]);
        }
        else{
            // int idx = binarySearch(ans, num_list[i]);
            // ans[idx] = num_list[i];
            ans[lower_bound(ans.begin(), ans.end(), num_list[i]) - ans.begin()] = num_list[i];
        }
    }

    cout << ans.size() << endl;

    // delete[] num_list;
}

int main(){
    INIT();
    INPUT();
    return 0;
}
