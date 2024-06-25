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

int n, m;
vector<int> num_list;
struct compMin{
    bool operator() (const int& a, const int& b) const{
        return a < b;
    }
};
void dfs(vector<int> v){
    if (v.size() == m){
        for (int i=0; i<v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i=0; i<n; i++){
        v.push_back(num_list[i]);
        dfs(v);
        v.pop_back();
    }
}
void INPUT(){
    cin >> n >> m;
    vector<int> v;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        num_list.push_back(tmp);
    }
    sort(num_list.begin(), num_list.end(), compMin());
    dfs(v);
}

void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}