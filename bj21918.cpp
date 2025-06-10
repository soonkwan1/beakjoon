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
    vector<int> v(n + 1);
    v[0] = 0;
    for (int i=1; i<=n; i++){
        cin >> v[i];
    }

    for (int i=0; i<m; i++){
        int cmd, t1, t2; cin >> cmd >> t1 >> t2;
        if (cmd == 1){
            v[t1] = t2;
        }
        else if (cmd == 2){
            for (int j=t1; j<=t2; j++){
                if (v[j]) v[j] = 0;
                else v[j] = 1;
            }
        }   
        else if (cmd == 3){
            for (int j=t1; j<=t2; j++){
                v[j] = 0;
            }
        }
        else if (cmd == 4){
            for (int j=t1; j<=t2; j++){
                v[j] = 1;
            }
        }
    }
    for (int i=1; i<=n; i++){
        cout << v[i] << " ";
    }
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