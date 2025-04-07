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
    for (int i=0; i<3; i++){
        string tmp; cin >> tmp;
        int ans = 0;

        char prev = tmp[0];
        int cnt = 1;
        for (int i=1; i<tmp.size(); i++){
            if (prev == tmp[i]){
                cnt++;
            }
            else{
                cnt = 1;
            }
            ans = max(ans, cnt);
            prev = tmp[i];
        }
        
        cout << ans << endl;
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