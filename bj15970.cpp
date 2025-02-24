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
    int n; cin >> n;
    vector<int>* v = new vector<int>[n+1];

    for (int i=0; i<n; i++){
        int x, y; cin >> x >> y;
        v[y].push_back(x);
    }

    int ans = 0;
    for (int i=1; i<=n; i++){
        if (v[i].size() == 1 || v[i].size() == 0) continue;

        sort(v[i].begin(), v[i].end(), compMin());
        ans += abs(v[i][0] - v[i][1]) + abs(v[i][v[i].size() -1] - v[i][v[i].size() - 2]);
        for (int j=1; j<v[i].size() - 1; j++){
             ans += min(abs(v[i][j] - v[i][j+1]), abs(v[i][j] - v[i][j-1]));
        }

    }

    cout << ans << endl;

    delete[] v;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}