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

unordered_map<int, bool> um;
int n;
vector<int> v;

struct compMin{
    bool operator() (const int& a, const int& b) const{
        return a > b;
    }
};
void INPUT(){
    cin >> n;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        v.push_back(tmp);
        um[tmp] = true;
    }
    sort(v.begin(), v.end(), compMin());
}
void dfs(int s, int num, int idx){
    // cout << "s : " << s << ", num : " << num << endl;
    if (num == 0){
        um[s] = true;
        return;
    }

    for (int i=idx; i<v.size(); i++){
        if (v[i] > num) continue;

        dfs(s, num - v[i], i + 1);
        
        if (um[s]) break;
    }
}
void SOLUTION(){
    int start = 0;
    while (true){
        start++;
        if (um[start]) continue;
        dfs(start, start, 0);

        if (!um[start]){
            cout << start << endl;
            break;
        }
    }
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}