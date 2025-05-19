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

int checkClock(int k, int h, int m, int s){
    int ret = 0;
    vector<int> v;
    
    v.push_back(h % 10);
    v.push_back(h / 10);
    v.push_back(m % 10);
    v.push_back(m / 10);
    v.push_back(s % 10);
    v.push_back(s / 10);

    // cout << h / 10 << h % 10 << " ";
    // cout << m / 10 << m % 10 << " ";
    // cout << s / 10 << s % 10 << endl;

    for (int i=0; i<v.size(); i++){
        if (v[i] == k){
            ret++;
            break;
        }
    }
    return ret;
}
void INPUT(){
    int n, k; cin >> n >> k;
    int h, m, s; h = 0; m = 0; s = 0;

    int ans = 0;
    while (h < n + 1){
        ans += checkClock(k, h, m ,s);
        s++;
        if (s == 60){
            s = 0;
            m++;
            if (m == 60){
                m = 0;
                h++;
            }
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