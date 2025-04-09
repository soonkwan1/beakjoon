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
    int n, m, l; cin >> n >> m >> l;
    unordered_map<int, int> um;

    int start = 1;
    int ans = 0;
    while (true){
        um[start]++;
        if (um[start] == m) break;
        ans++;

        int next = start;
        if (um[start] % 2 == 0){
            for (int i=0; i<l; i++){
                next++;
                if (next > n) next = 1;
            }
        }
        else{
            for (int i=0; i<l; i++){
                next--;
                if (next < 1) next = n;
            }
        }
        start = next;
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