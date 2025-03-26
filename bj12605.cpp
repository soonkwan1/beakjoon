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
    getchar();
    int cnt = 1;
    while (t--){
        string word; getline(cin, word);
        vector<string> v;
        string tmp = "";
        for (int i=0; i<word.size(); i++){
            if (word[i] == ' '){
                v.push_back(tmp);
                tmp = "";
            }
            else{
                tmp += word[i];
            }
        }
        v.push_back(tmp);

        cout << "Case #" << cnt <<": ";
        for (int i=v.size()-1; i>=0; i--){
            cout << v[i] << " ";
        }
        cnt++;
        cout << endl;
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