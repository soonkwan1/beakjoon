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
    int t; cin >> t;
    while (t--){
        string a, b; cin >> a >> b;
        if (a.size() != b.size()) cout << "Impossible" << endl;
        else{
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            bool flag = false;
            for (int i=0; i<a.size(); i++){
                if (a[i] != b[i]){
                    flag = true;
                    break;
                }
            }

            if (flag) cout << "Impossible" << endl;
            else cout << "Possible" << endl;
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