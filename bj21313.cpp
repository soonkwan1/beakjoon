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
    int n; cin >> n;
    vector<int> ans;
    for (int i=0; i<n-1; i++){
        ans.push_back(i % 2 + 1);
    }
    if (n % 2 == 0) ans.push_back(2);
    else ans.push_back(3);

    for (int i=0; i<ans.size(); i++) cout << ans[i] << " ";
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