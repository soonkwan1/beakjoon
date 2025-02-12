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

struct compGreedy{
    bool operator() (const pair<int,int>& a, pair<int,int>& b) const{
        if (a.first != b.first) return a.first < b.first;
        return a.second < b.second;
    }
};
void INPUT(){
    int n; cin >> n;
    vector<pair<int, int> > v;
    for (int i=0; i<n; i++){
        int start, end; 
        cin >> start >> end;
        end += start;
        v.push_back(make_pair(start, end));
    }

    sort(v.begin(), v.end(), compGreedy());
    int ans = v[0].second;
    for (int i=1; i<v.size(); i++){
        // cout << v[i].first << " " << v[i].second << endl;
        if (v[i].first >= ans){
            ans = v[i].second;
        }
        else{
            ans += (v[i].second - v[i].first);
        }
    }
    cout << ans << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}