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


int recursion(string s, int l, int r, int& cnt){
    cnt++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1, cnt);
}
int isPalindrome(string s, int& cnt){
    // return recursion(s, 0, s.size() - 1, cnt);
    for (int i=0; i<s.size() / 2; i++){
        if (s[i] != s[s.size() - 1 - i]) {
            cnt = i + 1;
            return 0;
        }
    }
    cnt = s.size() / 2 + 1;
    return 1;
}

void INPUT(){
    int t; cin >> t;
    while (t--){
        string s; cin >> s;
        int cnt = 0;
        cout << isPalindrome(s, cnt) << " " << cnt << endl;
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