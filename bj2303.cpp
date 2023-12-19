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
#define fse(A,B,C) for (int i=A; i<B; i+=C)
using namespace std;

void INIT(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
}
struct compMax{
    bool operator() (const int& a, const int& b) const{
        return a > b;        
    }
};
typedef struct Node{
    int num;
    int rank;
}Node;
struct compNode{
    bool operator() (const Node& a, const Node& b){
        if (a.num == b.num) return a.rank > b.rank;
        return a.num > b.num;
    }
};
void dfs(int idx, int* nums, vector<int> v, vector<pair<int,int> >& ans){
    if (v.size() == 3){
        int total = 0;
        for (int i=0; i<v.size(); i++){
            total += v[i];
        }
        
        ans.push_back(make_pair(total % 10, total));
        return;
    }

    for (int i=idx; i<5; i++){
        v.push_back(nums[i]);
        dfs(i+1, nums, v, ans);
        v.pop_back();
    }
}
void INPUT(){
    int n; cin >> n;

    vector<Node> ans;
    for (int tc=1; tc<=n; tc++){
        int nums[5];
        for (int i=0; i<5; i++) cin >> nums[i];

        vector<int> tmp;
        for (int i=0; i<5; i++){
            for (int j=i+1; j<5; j++){
                for (int k=j+1; k<5; k++){
                    int total = nums[i] + nums[j] + nums[k];
                    tmp.push_back(total % 10);
                }
            }
        }

        // for (int i=0; i<tmp.size(); i++){
        //     cout << tmp[i].first << " " << tmp[i].second << endl;
        // }

        sort(tmp.begin(), tmp.end(), compMax());
        Node node = {tmp[0], tc};
        ans.push_back(node);
    }

    // for (int i=0; i<ans.size(); i++){
    //     cout << ans[i].num << " " << ans[i].one << " " << ans[i].rank << endl;
    // }

    sort(ans.begin(), ans.end(), compNode());
    cout << ans[0].rank << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}