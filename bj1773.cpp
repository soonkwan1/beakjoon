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

void INPUT(){
    int n, c; cin >> n >> c;
    vector<bool> v(c+1);
    for (int i=0; i<c+1; i++) v[i] = false;

    vector<int> num(n);
    for (int i=0; i<n; i++) cin >> num[i];

    int ans = 0;
    for (int i=0; i<num.size(); i++){
        if (v[num[i]]) continue;
        for (int j=num[i]; j<=c; j+=num[i]){
            if (!v[j]) {
                v[j] = true; ans++;
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