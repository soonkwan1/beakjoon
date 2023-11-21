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
struct compMax{
    bool operator() (const int& a, const int& b) const{
        return a > b;
    }
};
void INPUT(){
    vector<int> crane;
    vector<int> things;
    int n; cin >> n;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        crane.push_back(tmp);
    }
    int m; cin >> m;
    for (int i=0; i<m; i++){
        int tmp; cin >> tmp;
        things.push_back(tmp);
    }
    sort(crane.begin(), crane.end(), compMax());
    sort(things.begin(), things.end(), compMax());
    
    if (things[0] > crane[0]) {
        cout << -1 << endl;
        return;
    }

    int ret = 0;
    while (!things.empty()){
        ret++;
        for (int i=0; i<crane.size(); i++){
            // if (!things.empty() && things.front() <= crane[i]){
            //     things.pop_front();
            // }
            for (int j=0; j<things.size(); j++){
                if (crane[i] >= things[j]){
                    things.erase(things.begin() + j);
                    break;
                }
            }
        }
    }

    cout << ret << endl;
}

int main(){
    INIT();
    INPUT();
    return 0;
}