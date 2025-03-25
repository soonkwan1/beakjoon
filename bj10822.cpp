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

int stringToInt(string word){
    int ret = 0;
    for (int i=word.size() - 1; i>=0; i--){
        ret += pow(10, i) * (int(word[i]) - 48);
    }
    return ret;
}
void INPUT(){
    string line; getline(cin, line);
    string tmp = "";
    int ans = 0;
    for (int i=0; i<line.size(); i++){
        if (line[i] == ',') {
            ans += stringToInt(tmp);
            tmp = "";
        }
        else tmp = line[i] + tmp;
    }
    cout << ans + stringToInt(tmp) << endl;
}
void SOLUTION(){
    
}
int main(){
    fastio;
    INPUT();
    // SOLUTION();
    return 0;
}