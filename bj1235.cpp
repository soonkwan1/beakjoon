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
    vector<string> v(n);
    for (int i=0; i<n; i++) cin >> v[i];
    int string_size = v[0].size();

    for (int i=1; i<=string_size; i++){
        int ans = 0;
        unordered_map<string, bool> um;
        for (int j=0; j<v.size(); j++){
            string tmp = "";
            for (int k=0; k<i; k++){
                tmp += v[j][string_size - 1 - k];
            }

            if (!um[tmp]){
                um[tmp] = true;
                ans++;
            }
        }

        if (ans == n) {
            cout << i << endl;
            break;
        }
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