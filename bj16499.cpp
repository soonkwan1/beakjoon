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

struct compMin{
    bool operator() (const char& a, const char& b) const{
        return a < b;
    }
};
void INPUT(){
    int n; cin >> n;
    unordered_map<string, bool> um;
    vector<string> ans;
    for (int i=0; i<n; i++){
        string word; cin >> word;
        sort(word.begin(), word.end(), compMin());
        if (um[word] == false){
            um[word] = true;
            ans.push_back(word);
        }
    }
    cout << ans.size() << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}