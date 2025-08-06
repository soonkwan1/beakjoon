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
        int n; cin >> n;
        char cmd; cin >> cmd;

        if (cmd == 'C'){
            vector<char> v;
            for (int i=0; i<n; i++){
                char ch; cin >> ch;
                v.push_back(ch);
            }
            
            for (int i=0; i<v.size(); i++){
                cout << int(v[i]) - 64 << " ";
            }
            cout << endl;
        }
        else{
            vector<int> v;
            for (int i=0; i<n; i++){
                int ch; cin >> ch;
                v.push_back(ch);
            }
            
            for (int i=0; i<v.size(); i++){
                cout << char(v[i] + 64) << " ";
            }
            cout << endl;
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