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
    int m; cin >> m;
    vector<int> v(m);
    for (int i=0; i<m; i++) cin >> v[i];

    bool visited[1001]; fill_n(visited, 1001, 0);
    for (int i=0; i<m; i++){
        for (int j=v[i]; j<=n; j+=v[i]){
            visited[j] = true;
        }
    }

    int ans = 0;
    for (int i=1; i<=n; i++){
        if (visited[i]) ans += i;
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