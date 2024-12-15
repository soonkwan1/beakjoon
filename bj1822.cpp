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

struct compMin{
    bool operator() (const int& a, const int& b) const{
        return a < b;
    }
};
void INPUT(){
    int a, b; cin >> a >> b;
    vector<int> v;
    for (int i=0; i<a; i++){
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    
    map<int, bool> um;
    for (int i=0; i<b; i++){
        int tmp; cin >> tmp;
        um[tmp] = true;
    }

    sort(v.begin(), v.end(), compMin());

    vector<int> ans;
    for (int i=0; i<v.size(); i++){
        if (!um[v[i]]) ans.push_back(v[i]);
    }

    cout << ans.size() << endl;
    for (int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
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