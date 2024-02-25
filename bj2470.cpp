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

int n, ans1, ans2;
vector<int> v;
int ans = int(2e9);
struct compMin{
    bool operator() (const int& a, const int& b) const{
        return a < b;
    }
};
void INPUT(){
    cin >> n;
    for (int i=0; i<n; i++){
        int tmp; cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), compMin());
}
void binarySearch(int s, int e){
    while (s < e){
        int tmp = v[s] + v[e];
        if (ans > abs(tmp)){
            ans = abs(tmp);
            ans1 = v[s], ans2 = v[e];
            if (ans == 0) break;
        }
        
        if (tmp < 0){
            s++;
        }   
        else e--;
    }
}
void SOLUTION(){
    binarySearch(0, n - 1);
    cout << ans1 << " " << ans2 << endl;
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}