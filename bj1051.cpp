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
    string** table = new string*[n];
    for (int i=0; i<n; i++){
        table[i] = new string[m];
        string line; cin >> line;
        for (int j=0; j<m; j++){
            table[i][j] = line[j];
        }
    }

    int ans = 1;
    int idx = n > m ? m : n;
    for (int k=1; k<idx; k++){
        for (int i=0; i<n-k; i++){
            for (int j=0; j<m-k; j++){
                string chk = table[i][j];
                if (table[i+k][j] == chk && table[i][j+k] == chk &&
                table[i+k][j+k] == chk){
                    ans = pow(k+1, 2);
                }
            }
        }
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