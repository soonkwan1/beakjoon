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

string s1, s2;
void INPUT(){
    cin >> s1 >> s2;
    while (s1.size() != s2.size()){
        int n = s2.size() - 1;
        if (s2[n] == 'A'){
            s2.pop_back();
        }
        else{
            s2.pop_back();
            reverse(s2.begin(), s2.end());
        }
    }
    if (s1 == s2) cout << 1 << endl;
    else cout << 0 << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    // SOLUTION();
    return 0;
}