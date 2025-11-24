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
        cin.ignore();
        string line; getline(cin, line);
        unordered_map<int, char> um;

        string cmp; cin >> cmp;
        for (int i=65; i<91; i++){
            um[i] = cmp[i-65];
        }

        for (int i=0; i<line.size(); i++){
            if (line[i] == ' ') cout << line[i];
            else cout << um[int(line[i])];
        }
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