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
    int n, taesu, p; cin >> n >> taesu >> p;
    vector<int> v(n+1); v[n] = taesu;
    for (int i=0; i<n; i++) cin >> v[i];
    sort(v.begin(), v.end(), compMax());

    int ranking[n+1]; fill_n(ranking, n+1, 0);
    ranking[0] = 1;
    int rank;
    int tmp = 1;
    for (int i=1; i<n+1; i++){
        if (taesu == v[i]) rank = i;
        if (v[i] == v[i-1]){
            ranking[i] = ranking[i-1];
            tmp++;
        }
        else{
            ranking[i] = ranking[i-1] + tmp;
            tmp = 1;
        }
    }

    if (rank < p) cout << ranking[rank] << endl;
    else cout << -1 << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}