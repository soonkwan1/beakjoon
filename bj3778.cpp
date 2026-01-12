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
    cin.ignore();
    int t = 0;
    
    while (n--){
        t++;
        string a, b;
        getline(cin, a);
        getline(cin, b);

        unordered_map<char, int> um;
        for (int i=0; i<a.size(); i++){
            um[a[i]]++;
        }
        int ans = 0;
        for (int i=0; i<b.size(); i++){
            if (um[b[i]]) um[b[i]]--;
            else ans++;
        }

        for (int i=97; i<97+26; i++){
            if (um[char(i)]) ans += um[char(i)];
        }

        cout << "Case #" << t << ": " << ans << endl;
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