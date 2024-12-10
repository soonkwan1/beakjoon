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
    int n, s, r; cin >> n >> s >> r;
    int* kayak = new int[n+1];
    fill_n(kayak, n+1, 1);

    
    for (int i=0; i<s; i++){
        int tmp; cin >> tmp;
        kayak[tmp]--;
    }

    for (int i=0; i<r; i++){
        int tmp; cin >> tmp;
        kayak[tmp]++;
    }

    for (int i=1; i<n+1; i++){
        if (kayak[i] == 0){
            if ((i >= 2)  && (kayak[i - 1] == 2)){
                kayak[i-1]--;
                kayak[i]++;
            }
            else if ((i<=n-1) && (kayak[i+1] == 2)){
                kayak[i+1]--;
                kayak[i]++;
            }
        }
    }

    int ans = 0;
    for (int i=1; i<n+1; i++){
        if (!kayak[i]) ans++;
    }

    cout << ans << endl;

    delete[] kayak;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}