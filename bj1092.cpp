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
struct compMin{
    bool operator() (const int& a, const int& b) const{
        return a < b;
    }
};
void INPUT(){
    vector<int> crane;
    int n; cin >> n;
    int mx = 0;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        crane.push_back(tmp);
        mx = max(mx, tmp);
    }
    sort(crane.begin(), crane.end(), compMin());
    vector<int>* linked = new vector<int>[n];

    int m; cin >> m;
    for (int i=0; i<m; i++){
        int weight; cin >> weight;
        if (weight > mx) {
            cout << -1 << endl;
            delete[] linked;
            return;
        }

        for (int i=0; i<crane.size(); i++){
            if (i == crane.size() - 1){
                linked[i].push_back(weight);
                break;
            }
            
            if (weight <= crane[i]){
                if (linked[i].size() > linked[i+1].size()) continue;
                linked[i].push_back(crane[i]);
                break;
            }
        }
    }
    
    int ret = 0;
    for (int i=0; i<n; i++){
        if (ret < linked[i].size()) ret = linked[i].size();
    }
    cout << ret << endl;
    delete[] linked;
}

int main(){
    INIT();
    INPUT();
    return 0;
}