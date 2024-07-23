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
    string line;
    getline(cin, line);

    int ans = 0;
    int tmp;
    string word = "";
    for (int i=0; i<line.size(); i++){
        if (line[i] == ' ') {
            tmp = stoi(word);
            if (tmp > 0) ans++;
            word = "";
        }
        else word += line[i];
    }
    tmp = stoi(word);
    if (tmp > 0) ans++;

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