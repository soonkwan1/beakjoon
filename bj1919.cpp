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
    string a, b; cin >> a >> b;
    vector<char> s;
    for (int i=0; i<26; i++){
        s.push_back(char(i + 97));
    }

    unordered_map<char, int> um1;
    unordered_map<char, int> um2;
    for (int i=0; i<a.size(); i++){
        um1[a[i]]++;
    }
    for (int i=0; i<b.size(); i++){
        um2[b[i]]++;
    }

    int ans = 0;
    for (int i=0; i<s.size(); i++){
        if (um1[s[i]] == 0 && um2[s[i]] == 0){
            continue;
        }
        ans += abs(um1[s[i]] - um2[s[i]]);
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