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
vector<int> v;
void INPUT(){
    cin >> n;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
}
void SOLUTION(){
    int cnt = 1;
    vector<int> ans;
    vector<int> idx;
    ans.push_back(v[0]);
    idx.push_back(cnt);
    cnt++;

    for (int i=1; i<v.size(); i++){
        if (ans.back() < v[i]){
            ans.push_back(v[i]);
            idx.push_back(cnt);
            cnt++;
        }
        else{
            int tmp = lower_bound(ans.begin(), ans.end(), v[i]) - ans.begin();
            idx.push_back(tmp + 1);
            ans[tmp] = v[i];
        }
    }
    cout << --cnt << endl;
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}

/*
6
10 20 10 30 20 50
10 20 30 40 50 60 70 80 90 100
9 19 29 39 49 59 69 79 89 99
*/