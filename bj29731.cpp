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
    vector<string> v;
    v.push_back("Never gonna give you up");
    v.push_back("Never gonna let you down");
    v.push_back("Never gonna run around and desert you");
    v.push_back("Never gonna make you cry");
    v.push_back("Never gonna say goodbye");
    v.push_back("Never gonna tell a lie and hurt you");
    v.push_back("Never gonna stop");
    
    while (t--){
        string word; getline(cin, word);
        int cnt = 0;
        for (int i=0; i<v.size(); i++){
            for (int j=0; j<word.size(); j++){
                
            }
        }
        
    }
    cout << "Yes" << endl;
}
void SOLUTION(){

}
int main(){
    fastio;
    INPUT();
    SOLUTION();
    return 0;
}