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

int n;
vector<int> num_list;
void INPUT(){
    cin >> n;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp; num_list.push_back(tmp);
    }
}
void SOLUTION(){
    deque<int> dq;
    deque<int> ans;
    for (int i=n-1; i>=0; i--){
        if (dq.empty()){
            ans.push_front(-1);
            dq.push_front(num_list[i]);
        }
        else{
            while(!dq.empty()){
                if (num_list[i] < dq.front()){
                    ans.push_front(dq.front());
                    dq.push_front(num_list[i]);
                    break;
                }
                else{
                    dq.pop_front();
                }
            }

            if (dq.empty()){
                ans.push_front(-1);
                dq.push_front(num_list[i]);
            }
        }
    }
    for (int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}