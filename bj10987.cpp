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
    string word; cin >> word;
    unordered_map<char, int> um;
    for (int i=0; i<word.size(); i++){
        um[word[i]]++;
    }
    
    char ch[5] = {'a', 'e', 'i', 'o', 'u'};
    int ans = 0;
    for (int i=0; i<5; i++){
        ans += um[ch[i]];
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