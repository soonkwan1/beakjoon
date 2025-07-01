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
    string line; getline(cin, line);
    line += ' ';
    string tmp = "";

    int ans = 0;
    for (int i=0; i<line.size(); i++){
        if (line[i] == ' '){
            ans += stoi(tmp);
            tmp = "";
        }
        else{
            tmp += line[i];
        }
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