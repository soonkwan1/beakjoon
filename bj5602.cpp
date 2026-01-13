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

struct compMax{
    bool operator() (const pair<int,int>& a, const pair<int,int>& b){
        if (a.second != b.second) return a.second > b.second;
        return a.first < b.first;
    }
};

void INPUT(){
    int n, m; cin >> n >> m;
    vector<int> v(m);
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            int tmp; cin >> tmp;
            v[j] += tmp;
        }
    }

    vector<pair<int,int> > vp;
    for (int i=0; i<m; i++){
        vp.push_back(make_pair(i+1, v[i]));
    }

    sort(vp.begin(), vp.end(), compMax());
    for (int i=0; i<vp.size(); i++) cout << vp[i].first << " ";
    cout << endl;

}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}