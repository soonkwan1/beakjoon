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

void INIT() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
struct Data{
    int value;
    int key;
};
void INPUT() {
    int n; cin >> n;
    vector<int> num_list;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        num_list.push_back(t);
    }

    vector<int> ans;
    vector<int> idx;

    int cnt = 1;
    ans.push_back(num_list.front());
    idx.push_back(cnt);
    cnt++;

    for (int i = 1; i < n; i++) {
        if (ans.back() < num_list[i]) {
            ans.push_back(num_list[i]);
            idx.push_back(cnt);
            cnt++;
        }
        else {
            int tmp = lower_bound(ans.begin(), ans.end(), num_list[i]) - ans.begin();
            idx.push_back(tmp + 1);
            ans[tmp] = num_list[i];
        }
    }

    cout << --cnt << endl;
    deque<int> hist;
    for (int i=idx.size()-1; i>=0; i--){
        if (idx[i] == cnt){
            hist.push_front(num_list[i]);
            cnt--;
        }
    }
    for (int i=0; i<hist.size(); i++) cout << hist[i] << " ";
    cout << endl;

}

int main() {
    INIT();
    INPUT();
    return 0;
}

void dfs(){
    
}