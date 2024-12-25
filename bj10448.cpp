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

int dfs(int tmp, int n, int idx, int cnt, vector<int> v){
    if (cnt == 3){
        if (tmp == 0) return 1;
        return 0;
    }

    int flag = 0;
    for (int i=idx; i<v.size(); i++){
        tmp -= v[i];
        if (tmp < 0) return 0;
        flag = dfs(tmp, n, i, cnt+1, v);
        if (flag) return flag;
        tmp += v[i];
    }
    return flag;
}
void INPUT(){
    vector<int> v;
    for (int i=2; i<=50; i++){
        v.push_back((i * (i-1)) / 2);
    }

    int k; cin >> k;
    while (k--){
        int n; cin >> n;
        cout << dfs(n, n, 0, 0, v) << endl;
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