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
    bool operator() (const int& a, const int& b) const{
        return a > b;
    }
};
void INPUT(){
    int n; cin >> n;
    vector<int> odd;
    int ans = 0;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        if (tmp % 2 == 0) ans += tmp;
        else{
            odd.push_back(tmp);
        }
    }

    int cnt = odd.size() % 2 == 0 ? odd.size() : odd.size() - 1;
    sort(odd.begin(), odd.end(), compMax());

    for (int i=0; i<cnt; i++){
        ans += odd[i];
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