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
    int n, m; cin >> n >> m;
    vector<int> v(m);
    for (int i=0; i<m; i++) cin >> v[i];

    vector<int> score(n);
    for (int i=0; i<m; i++){
        int fa = 0;
        for (int j=0; j<n; j++){
            int tmp; cin >> tmp;
            if (tmp == v[i]){
                score[j]++;
            }
            else {
                fa++;
            }
        }
        score[v[i] - 1] += fa;
    }

    for (int i=0; i<score.size(); i++){
        cout << score[i] << endl;
    }
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}